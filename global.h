#ifndef GLOBAL_H
#define GLOBAL_H

#include <cmath>
#include <map>
#include <utility>
#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QMessageBox>
#include <QTimer>
#include <QFont>
#include <QPaintEvent>
#include <QPainter>
#include <QtMultimedia/QMediaPlayer>
#include <QMediaPlaylist>

#define INTIME(x) connect(&main_timer,SIGNAL(timeout()),this,SLOT(x()),Qt::DirectConnection) //每秒将一个函数触发60次
#define MIN -2147483648
#define MAX 2147483647
#define pic(x) ":/game_resources/image/"#x".png" //图片位置宏
#define snd(x)  "qrc:/game_resources/sound/"#x".mp3" //声音位置宏

class GameButton;
class GameObject;
class VirtualObject;
class HeavyBody;
class Pushable;
class LineBarrier;
class Role;
class GamePage;
class StartPage;
class MainWindow;

extern QTimer main_timer;
extern QFont standard_font;

#endif // GLOBAL_H
