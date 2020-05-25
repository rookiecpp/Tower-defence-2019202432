#include "widget.h"
#include "config.h"
#include<QIcon>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    initScene();//���ó�ʼ������
}

Widget::~Widget()
{
}

void Widget::initScene()
{
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);//���ô��ڹ̶��ߴ�
    setWindowTitle(GAME_TITLE);//���ñ���
    setWindowIcon(QIcon("./res/yeicon.ico"));
}

