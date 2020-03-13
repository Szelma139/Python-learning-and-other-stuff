#ifndef CREATETOURNAMENTFORM_H
#define CREATETOURNAMENTFORM_H

#include <QWidget>

namespace Ui {
class CreateTournamentForm;
}

class CreateTournamentForm : public QWidget
{
    Q_OBJECT

public:
    explicit CreateTournamentForm(QWidget *parent = 0);
    ~CreateTournamentForm();

private:
    Ui::CreateTournamentForm *ui;
};

#endif // CREATETOURNAMENTFORM_H
