#include "tournamentmodel.h"

TournamentModel::TournamentModel()
{

}

std::list<TeamModel> TournamentModel::getEnteredTeams() const
{
    return EnteredTeams;
}

void TournamentModel::setEnteredTeams(const std::list<TeamModel> &value)
{
    EnteredTeams = value;
}

double TournamentModel::getEntryFee() const
{
    return EntryFee;
}

void TournamentModel::setEntryFee(double value)
{
    EntryFee = value;
}

std::string TournamentModel::getTournamentName() const
{
    return TournamentName;
}

void TournamentModel::setTournamentName(const std::string &value)
{
    TournamentName = value;
}

std::list<PrizeModel> TournamentModel::getPrizes() const
{
    return Prizes;
}

void TournamentModel::setPrizes(const std::list<PrizeModel> &value)
{
    Prizes = value;
}

std::list<std::list<MatchupModel> > TournamentModel::getRounds() const
{
    return Rounds;
}

void TournamentModel::setRounds(const std::list<std::list<MatchupModel> > &value)
{
    Rounds = value;
}
