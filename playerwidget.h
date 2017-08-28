#ifndef PLAYERWIDGET_H
#define PLAYERWIDGET_H

#include <QWidget>
#include <QtWidgets>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QVideoWidget>

class PlayerWidget : public QWidget
{
    Q_OBJECT
public:
    explicit PlayerWidget(QWidget *parent = 0);

signals:

public slots:

private slots:
    void MediaChange();

private:
    QMediaPlayer *Player;
    QMediaPlaylist *PlayList;
    QVideoWidget *VideoWidget;
    QSettings *Setting;

    void SettingInit();

};

#endif // PLAYERWIDGET_H
