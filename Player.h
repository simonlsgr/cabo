#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
class Player
{
    public:

        int playerNumber;
        Player();
        explicit Player(int playerNumber);
        void turn();
        void drawCard();
        std::string toString();
};

#endif