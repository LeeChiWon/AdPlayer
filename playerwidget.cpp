#include "playerwidget.h"

PlayerWidget::PlayerWidget(QWidget *parent) : QWidget(parent)
  ,VideoWidget(0)
{
    Player=new QMediaPlayer(this);
    PlayList=new QMediaPlaylist();
    Player->setPlaylist(PlayList);

    player = new QMediaPlayer;

    playlist = new QMediaPlaylist(player);
    playlist->addMedia(QUrl("http://example.com/myclip1.mp4"));
    playlist->addMedia(QUrl("http://example.com/myclip2.mp4"));

    videoWidget = new QVideoWidget;
    player->setVideoOutput(videoWidget);

    videoWidget->show();
    playlist->setCurrentIndex(1);
    player->play();


}

void PlayerWidget::MediaChange()
{
    Player->stop();
    PlayList->clear();
    PlayList->addMedia()

}
