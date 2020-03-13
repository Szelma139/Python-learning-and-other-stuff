#ifndef MATCHUPENTRYMODEL_H
#define MATCHUPENTRYMODEL_H

#include <teammodel.h>


class MatchupModel;
class MatchupEntryModel
{
public:
    MatchupEntryModel();
    TeamModel getTeamCompeting() const;
    void setTeamCompeting(const TeamModel &value);

    double getScore() const;
    void setScore(double value);



    MatchupModel *getParentMatchup() const;
    void setParentMatchup(MatchupModel *value);

private:
    TeamModel teamCompeting;
    double score;
    MatchupModel * ParentMatchup;

};

#endif // MATCHUPENTRYMODEL_H
