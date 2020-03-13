#ifndef CREATEPRIZEFORM_H
#define CREATEPRIZEFORM_H

#include <QWidget>

namespace Ui {
class CreatePrizeForm;
}

class CreatePrizeForm : public QWidget
{
    Q_OBJECT

public:
    explicit CreatePrizeForm(QWidget *parent = 0);
    ~CreatePrizeForm();

private:
    Ui::CreatePrizeForm *ui;
};

#endif // CREATEPRIZEFORM_H
