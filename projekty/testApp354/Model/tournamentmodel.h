#ifndef TOURNAMENTMODEL_H
#define TOURNAMENTMODEL_H

#include <string>
#include <matchupmodel.h>
#include <list>
#include <prizemodel.h>

class TournamentModel
{
public:
    TournamentModel();
    std::list<TeamModel> getEnteredTeams() const;
    void setEnteredTeams(const std::list<TeamModel> &value);

    double getEntryFee() const;
    void setEntryFee(double value);

    std::string getTournamentName() const;
    void setTournamentName(const std::string &value);

    std::list<PrizeModel> getPrizes() const;
    void setPrizes(const std::list<PrizeModel> &value);

    std::list<std::list<MatchupModel> > getRounds() const;
    void setRounds(const std::list<std::list<MatchupModel> > &value);

private:
    std::string TournamentName;
    double EntryFee;
    std::list<TeamModel> EnteredTeams;
    std::list<PrizeModel> Prizes;
    std::list<std::list<MatchupModel>> Rounds;
};

#endif // TOURNAMENTMODEL_H
