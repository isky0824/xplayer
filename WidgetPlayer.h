#ifndef WIDGETPLAYER_H
#define WIDGETPLAYER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class WidgetPlayer; }
QT_END_NAMESPACE

class WidgetPlayer : public QWidget
{
    Q_OBJECT

public:
    WidgetPlayer(QWidget *parent = nullptr);
    ~WidgetPlayer();

private:
    Ui::WidgetPlayer *ui;
};
#endif // WIDGETPLAYER_H
