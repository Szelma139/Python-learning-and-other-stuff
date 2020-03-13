#ifndef VNCVIEW_H
#define VNCVIEW_H

#include <QWidget>

class VncView : public QWidget
{
    Q_OBJECT
public:
    explicit VncView(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // VNCVIEW_H