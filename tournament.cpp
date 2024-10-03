#include "tournament.h"
#include <iostream>

FootballPlayer::FootballPlayer(const std::string &name, int goals, int yellowCards)
    : name(name), goals(goals), yellowCards(yellowCards) {}

void FootballPlayer::displayStats() const
{
    std::cout << "Player: " << name << ", Goals: " << goals << ", Yellow Cards: " << yellowCards << std::endl;
}

Team::Team(const std::string &name) : name(name) {}

void Team::addPlayer(const FootballPlayer &player)
{
    players.push_back(player);
}

void Team::displayTeamStats() const
{
    std::cout << "Team: " << name << std::endl;
    for (const auto &player : players)
    {
        player.displayStats();
    }
}

Judge::Judge(const std::string &name) : name(name) {}

std::string Judge::getName() const
{
    return name;
}

FootballTournament::FootballTournament() : matchLocation(""), matchDate("") {}

void FootballTournament::addTeam(const Team &team)
{
    teams.push_back(team);
}

void FootballTournament::addJudge(const Judge &judge)
{
    judges.push_back(judge);
}

void FootballTournament::scheduleMatch(const std::string &location, const std::string &date)
{
    matchLocation = location;
    matchDate = date;
}

void FootballTournament::displaySchedule() const
{
    std::cout << "Match scheduled at " << matchLocation << " on " << matchDate << std::endl;
}
