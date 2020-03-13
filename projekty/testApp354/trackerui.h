#ifndef TRACKERUI_H
#define TRACKERUI_H

#include <QWidget>

namespace Ui {
class TrackerUI;
}

class TrackerUI : public QWidget
{
    Q_OBJECT

public:
    explicit TrackerUI(QWidget *parent = 0);
    ~TrackerUI();

private:
    Ui::TrackerUI *ui;
};

#endif // TRACKERUI_H
