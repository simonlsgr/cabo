//
// Created by simon on 28.03.24.
//

#include <vector>
#include <algorithm>
#include <iostream>
#include <random>
#include <chrono>


#include "Deck.h"
#include "Card.h"





Deck::Deck() {

    Card card = *new Card(0, 1, NONE);
    this->cardDeck.push_back(card);
    card.setter(0,2,NONE);
    this->cardDeck.push_back(card);
    this->cardDeck.push_back(card);

    card.setter(1, 3, NONE);
    this->cardDeck.push_back(card);
    card.setter(1, 4, NONE);
    this->cardDeck.push_back(card);
    card.setter(1, 5, NONE);
    this->cardDeck.push_back(card);
    card.setter(1, 6, NONE);
    this->cardDeck.push_back(card);
    card.setter(2, 7, NONE);
    this->cardDeck.push_back(card);
    card.setter(2, 8, NONE);
    this->cardDeck.push_back(card);
    card.setter(2, 9, NONE);
    this->cardDeck.push_back(card);
    card.setter(2, 10, NONE);
    this->cardDeck.push_back(card);

    card.setter(3, 11, NONE);
    this->cardDeck.push_back(card);
    card.setter(3, 12, NONE);
    this->cardDeck.push_back(card);
    card.setter(3, 13, NONE);
    this->cardDeck.push_back(card);
    card.setter(3, 14, NONE);
    this->cardDeck.push_back(card);

    card.setter(4, 15, NONE);
    this->cardDeck.push_back(card);
    card.setter(4, 16, NONE);
    this->cardDeck.push_back(card);
    card.setter(4, 17, NONE);
    this->cardDeck.push_back(card);
    card.setter(4, 18, NONE);
    this->cardDeck.push_back(card);

    card.setter(5, 19, NONE);
    this->cardDeck.push_back(card);
    card.setter(5, 20, NONE);
    this->cardDeck.push_back(card);
    card.setter(5, 21, NONE);
    this->cardDeck.push_back(card);
    card.setter(5, 22, NONE);
    this->cardDeck.push_back(card);

    card.setter(6, 23, NONE);
    this->cardDeck.push_back(card);
    card.setter(6, 24, NONE);
    this->cardDeck.push_back(card);
    card.setter(6, 25, NONE);
    this->cardDeck.push_back(card);
    card.setter(6, 26, NONE);
    this->cardDeck.push_back(card);

    card.setter(7, 27, PEEK);
    this->cardDeck.push_back(card);
    card.setter(7, 28, PEEK);
    this->cardDeck.push_back(card);
    card.setter(7, 29, PEEK);
    this->cardDeck.push_back(card);
    card.setter(7, 30, PEEK);
    this->cardDeck.push_back(card);

    card.setter(8, 31, PEEK);
    this->cardDeck.push_back(card);
    card.setter(8, 32, PEEK);
    this->cardDeck.push_back(card);
    card.setter(8, 33, PEEK);
    this->cardDeck.push_back(card);
    card.setter(8, 34, PEEK);
    this->cardDeck.push_back(card);

    card.setter(9, 35, SPY);
    this->cardDeck.push_back(card);
    card.setter(9, 36, SPY);
    this->cardDeck.push_back(card);
    card.setter(9, 37, SPY);
    this->cardDeck.push_back(card);
    card.setter(9, 38, SPY);
    this->cardDeck.push_back(card);

    card.setter(10, 39, SPY);
    this->cardDeck.push_back(card);
    card.setter(10, 40, SPY);
    this->cardDeck.push_back(card);
    card.setter(10, 41, SPY);
    this->cardDeck.push_back(card);
    card.setter(10, 42, SPY);
    this->cardDeck.push_back(card);

    card.setter(11, 43, SWAP);
    this->cardDeck.push_back(card);
    card.setter(11, 44, SWAP);
    this->cardDeck.push_back(card);
    card.setter(11, 45, SWAP);
    this->cardDeck.push_back(card);
    card.setter(11, 46, SWAP);
    this->cardDeck.push_back(card);

    card.setter(12, 47, SWAP);
    this->cardDeck.push_back(card);
    card.setter(12, 48, SWAP);
    this->cardDeck.push_back(card);
    card.setter(12, 49, SWAP);
    this->cardDeck.push_back(card);
    card.setter(12, 50, SWAP);
    this->cardDeck.push_back(card);

    card.setter(13, 51, NONE);
    this->cardDeck.push_back(card);
    card.setter(13, 52, NONE);
    this->cardDeck.push_back(card);
}

void Deck::shuffle() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(std::begin(this->cardDeck), std::end(this->cardDeck), std::default_random_engine(seed));
}


std::string Deck::toString() {
    std::string res;
    res += "Function 0 = Peek, 1 = Spy, 2 = SWAP\n";
    for (Card card : cardDeck) {
        if (card.func != NONE) {
            res += "Value: " + std::to_string(card.cardValue) + " ID: " + std::to_string(card.cardId) + " Function: " + std::to_string(card.func) + "\n";
        } else {
            res += "Value: " + std::to_string(card.cardValue) + " ID: " + std::to_string(card.cardId) + "\n";
        }
    }

    return res;
}

