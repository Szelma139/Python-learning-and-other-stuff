#include "teammodel.h"

TeamModel::TeamModel()
{

}

std::list<PersonModel> TeamModel::getTeamMembers() const
{
    return TeamMembers;
}

void TeamModel::setTeamMembers(const std::list<PersonModel> &value)
{
    TeamMembers = value;
}

std::string TeamModel::getTeamName() const
{
    return TeamName;
}

void TeamModel::setTeamName(const std::string &value)
{
    TeamName = value;
}
