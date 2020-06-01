#include "WidgetPlayer.h"
#include "ui_WidgetPlayer.h"

WidgetPlayer::WidgetPlayer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WidgetPlayer)
{
    ui->setupUi(this);
}

WidgetPlayer::~WidgetPlayer()
{
    delete ui;
}

