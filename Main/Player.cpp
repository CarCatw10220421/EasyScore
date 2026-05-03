#include "Player.h"

Player::Player() : id(0), name(""), score(0) {
}

Player::Player(int playerId, const std::string& playerName, int playerScore)
    : id(playerId), name(playerName), score(playerScore) {
}
