#include "mainsettings.h"

MainSettings::MainSettings()
{

}

void MainSettings::loadSettings()
{

}

void MainSettings::saveSettings()
{

}

QList<QString> MainSettings::listOfSettings() const
{
    return m_listOfSettings;
}

void MainSettings::setListOfSettings(const QList<QString> &listOfSettings)
{
    m_listOfSettings = listOfSettings;
}
