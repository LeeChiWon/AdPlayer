#include "playerwidget.h"

PlayerWidget::PlayerWidget(QWidget *parent) : QWidget(parent)
  ,VideoWidget(0)
{
    SettingInit();
    Player=new QMediaPlayer(this);
    PlayList=new QMediaPlaylist();
    VideoWidget = new QVideoWidget();

    QBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(VideoWidget);
    setLayout(layout);

    Player->setVideoOutput(VideoWidget);
    VideoWidget->show();
}

void PlayerWidget::MediaChange()
{
    Player->stop();
   // PlayList->clear();
   // PlayList->addMedia(QMediaContent(QUrl(QString("file:///c:/1.avi"))));
   // Player->setPlaylist(PlayList);
    Player->setMedia(QUrl(QString("file:///c:/1.avi")));
    Player->play();
}

void PlayerWidget::SettingInit()
{
    Setting=new QSettings("EachOne","AdPlayer",this);
}
