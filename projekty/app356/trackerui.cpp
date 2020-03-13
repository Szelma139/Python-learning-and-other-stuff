#include "trackerui.h"
#include "ui_trackerui.h"

TrackerUI::TrackerUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrackerUI)
{
    ui->setupUi(this);

}

TrackerUI::~TrackerUI()
{
    delete ui;
}
