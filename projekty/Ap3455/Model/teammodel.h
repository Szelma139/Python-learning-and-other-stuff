#ifndef TEAMMODEL_H
#define TEAMMODEL_H

#include <list>
#include <personmodel.h>

class TeamModel
{
public:
    TeamModel();
    std::list<PersonModel> getTeamMembers() const;
    void setTeamMembers(const std::list<PersonModel> &value);

    std::string getTeamName() const;
    void setTeamName(const std::string &value);

private:
    std::list<PersonModel> TeamMembers;
    std::string TeamName;
};

#endif // TEAMMODEL_H
