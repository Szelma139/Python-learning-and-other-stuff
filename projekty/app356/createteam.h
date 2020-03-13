#ifndef CREATETEAM_H
#define CREATETEAM_H

#include <QWidget>

namespace Ui {
class CreateTeam;
}

class CreateTeam : public QWidget
{
    Q_OBJECT

public:
    explicit CreateTeam(QWidget *parent = 0);
    ~CreateTeam();

private:
    Ui::CreateTeam *ui;
};

#endif // CREATETEAM_H
