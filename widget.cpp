#include "widget.h"
#include "config.h"
#include<QIcon>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    initScene();//调用初始化场景
}

Widget::~Widget()
{
}

void Widget::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);//设置窗口固定尺寸
    setWindowTitle(GAME_TITLE);//设置标题
    setWindowIcon(QIcon("./res/yeicon.ico"));
}

