#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// Represents one leaderboard player.
class Player {
public:
    int id;
    std::string name;
    int score;

    Player();
    Player(int playerId, const std::string& playerName, int playerScore);
};

#endif
