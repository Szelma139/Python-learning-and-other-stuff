#ifndef MATCHUPMODEL_H
#define MATCHUPMODEL_H
#include <list>
#include <iostream>
#include <teammodel.h>


#include <matchupentrymodel.h>


class MatchupModel
{
public:
    MatchupModel();
    std::list<MatchupEntryModel> getEntries() const;
    void setEntries(const std::list<MatchupEntryModel> &value);

    TeamModel getWinner() const;
    void setWinner(const TeamModel &value);

    int getMatchupRound() const;
    void setMatchupRound(int value);

private:
    std::list<MatchupEntryModel> Entries;
    TeamModel Winner;
    int MatchupRound;


};

#endif // MATCHUPMODEL_H
