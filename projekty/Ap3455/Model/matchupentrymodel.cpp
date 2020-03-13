#include "matchupentrymodel.h"

MatchupEntryModel::MatchupEntryModel()
{

}

TeamModel MatchupEntryModel::getTeamCompeting() const
{
    return teamCompeting;
}

void MatchupEntryModel::setTeamCompeting(const TeamModel &value)
{
    teamCompeting = value;
}

double MatchupEntryModel::getScore() const
{
    return score;
}

void MatchupEntryModel::setScore(double value)
{
    score = value;
}

MatchupModel *MatchupEntryModel::getParentMatchup() const
{
    return ParentMatchup;
}

void MatchupEntryModel::setParentMatchup(MatchupModel *value)
{
    ParentMatchup = value;
}


