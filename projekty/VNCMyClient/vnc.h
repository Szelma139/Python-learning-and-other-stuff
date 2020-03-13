#ifndef VNC_H
#define VNC_H

#include <QWidget>

class Vnc : public QWidget
{
    Q_OBJECT
public:
    explicit Vnc(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // VNC_H