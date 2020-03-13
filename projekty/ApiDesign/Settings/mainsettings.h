#ifndef MAINSETTINGS_H
#define MAINSETTINGS_H

#include <QList>


class MainSettings
{
public:
    MainSettings();
    void loadSettings();
    void saveSettings();
    QList<QString> listOfSettings() const;
    void setListOfSettings(const QList<QString> &listOfSettings);

private:
    QList<QString> m_listOfSettings;
};

#endif // MAINSETTINGS_H
