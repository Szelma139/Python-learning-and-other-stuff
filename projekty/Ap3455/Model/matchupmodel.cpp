#include "matchupmodel.h"

MatchupModel::MatchupModel()
{

}

std::list<MatchupEntryModel> MatchupModel::getEntries() const
{
    return Entries;
}

void MatchupModel::setEntries(const std::list<MatchupEntryModel> &value)
{
    Entries = value;
}

TeamModel MatchupModel::getWinner() const
{
    return Winner;
}

void MatchupModel::setWinner(const TeamModel &value)
{
    Winner = value;
}

int MatchupModel::getMatchupRound() const
{
    return MatchupRound;
}

void MatchupModel::setMatchupRound(int value)
{
    MatchupRound = value;
}
