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

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreatePrizeForm *ui;
    bool ValidateForm();
};

#endif // CREATEPRIZEFORM_H
