#include "Player.h"

#include <iostream>

int playerNumber;

Player::Player() {
    std::cout << "Creating player<..." << std::endl;
}

Player::Player(int playerNumber) {
    std::cout << "Creating player..." << std::endl;
    this->playerNumber = playerNumber;
}

void Player::turn() {
    std::cout << "Player " << playerNumber << "'s turn..." << std::endl;
    drawCard();
}

void Player::drawCard() {
    std::cout << "Drawing a card..." << std::endl;
}

std::string Player::toString() {
    return "Player " + std::to_string(playerNumber);
}
