#include "Player.h"
#include "Deck.h"
#include "Card.h"
#include <iostream>
#include <vector>

int main() {
    std::cout << "############### CABO ###############\n" << std::endl;
//    int players;
//    while (players < 2 || players > 5)
//    {
//        std::cout << "Put in the number of players (2-5): ";
//        std::cin >> players;
//
//    }
//
//    std::vector<Player> playerList;
//
//    for (int i = 0; i < players; i++) {
//        Player* player = new Player(i);
//        playerList.push_back(*player);
//    }
//
//    for (Player player : playerList) {
//        std::cout << player.toString() << std::endl;
//    }
    Deck deck = *new Deck();
    deck.shuffle();
    std::cout << deck.toString() << std::endl;



//    while (true) {
//        for (Player player : playerList) {
//
//        }
//    }
    
    return 0;
}