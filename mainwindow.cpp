#include "mainwindow.h"
#include "ui_mainwindow.h"

#include    <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);        //创建视频播放器
    QAudioOutput *audioOutput= new QAudioOutput(this);//创建QAudioOutput对象的实例，用于管理音频输出。
    player->setAudioOutput(audioOutput);        //将QMediaPlayer的音频输出设置为之前创建的QAudioOutput对象。
    player->setVideoOutput(ui->videoWidget);    //将QMediaPlayer的视频输出设置为用户界面中的videoWidget控件。这个控件负责显示视频内容。

    ui->videoWidget->setMediaPlayer(player);//设置显示组件的关联播放器

    connect(player,&QMediaPlayer::playbackStateChanged,this, &MainWindow::do_stateChanged);//使用QObject::connect函数连接QMediaPlayer的playbackStateChanged信号到MainWindow类的do_stateChanged槽函数。当播放器状态改变时，将调用do_stateChanged。

    connect(player,&QMediaPlayer::positionChanged,this, &MainWindow::do_positionChanged);//连接positionChanged信号到do_positionChanged槽函数，用于处理播放位置变化。

    connect(player,&QMediaPlayer::durationChanged,this, &MainWindow::do_durationChanged);//连接durationChanged信号到do_durationChanged槽函数，用于处理媒体时长变化。
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::do_stateChanged(QMediaPlayer::PlaybackState state)//这个槽函数响应QMediaPlayer的playbackStateChanged信号。
{//播放器状态变化
    bool isPlaying = (state==QMediaPlayer::PlayingState);//isPlaying变量用于检查播放器是否处于播放状态。
    ui->btnPlay->setEnabled(!isPlaying);
    ui->btnPause->setEnabled(isPlaying);
    ui->btnStop->setEnabled(isPlaying);//根据播放器的状态，启用或禁用界面上的播放(btnPlay)、暂停(btnPause)和停止(btnStop)按钮。如果正在播放，则禁用播放按钮，启用暂停和停止按钮；否则，反之亦然
}

void MainWindow::do_durationChanged(qint64 duration)//这个槽函数响应QMediaPlayer的durationChanged信号。
{//文件时长变化
    ui->sliderPosition->setMaximum(duration);

    int   secs=duration/1000;   //秒
    int   mins=secs/60;         //分钟
    secs=secs % 60;             //余数秒
    durationTime=QString::asprintf("%d:%d",mins,secs);//计算时长并转换为分钟和秒数，然后更新durationTime字符串
    ui->LabRatio->setText(positionTime+"/"+durationTime);
}

void MainWindow::do_positionChanged(qint64 position)
{//文件播放位置变化
    if (ui->sliderPosition->isSliderDown())
        return;     //如果正在拖动滑条，退出
    ui->sliderPosition->setSliderPosition(position);
    int   secs=position/1000;   //秒
    int   mins=secs/60;         //分钟
    secs=secs % 60;             //余数秒
    positionTime=QString::asprintf("%d:%d",mins,secs);
    ui->LabRatio->setText(positionTime+"/"+durationTime);
}

void MainWindow::on_btnAdd_clicked()
{//打开文件
    QString curPath=QDir::homePath();
    QString dlgTitle="选择视频文件";
    QString filter="视频文件(*.wmv, *.mp4);;所有文件(*.*)";
    QString aFile=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);//使用QFileDialog::getOpenFileName弹出文件选择对话框，让用户选择视频文件。

    if (aFile.isEmpty())
        return;

    QFileInfo   fileInfo(aFile);//
    ui->labCurMedia->setText(fileInfo.fileName());//使用QFileInfo获取文件信息，并将文件名设置到标签(labCurMedia)上。

    player->setSource(QUrl::fromLocalFile(aFile));  //设置视频播放器的播放源为用户选择的文件，并开始播放
    player->play();
}

void MainWindow::on_btnPlay_clicked()
{//播放
    player->play();//调用QMediaPlayer的play方法开始播放视频。
}

void MainWindow::on_btnPause_clicked()
{//暂停
    player->pause();//调用QMediaPlayer的pause方法暂停视频播放。
}

void MainWindow::on_btnStop_clicked()
{//停止
    player->stop();//调用QMediaPlayer的stop方法停止视频播放。
}

void MainWindow::on_sliderVolumn_valueChanged(int value)
{//调节音量
    player->audioOutput()->setVolume(value/100.0);
}

void MainWindow::on_btnSound_clicked()
{//静音按钮
    bool mute=player->audioOutput()->isMuted();
    player->audioOutput()->setMuted(!mute);
    if (mute)
        ui->btnSound->setIcon(QIcon(":/images/images/volumn.bmp"));
    else
        ui->btnSound->setIcon(QIcon(":/images/images/mute.bmp"));
}

void MainWindow::on_sliderPosition_valueChanged(int value)
{//播放位置
   player->setPosition(value);
}

void MainWindow::on_pushButton_clicked()
{//全屏按钮
    ui->videoWidget->setFullScreen(true);
}
