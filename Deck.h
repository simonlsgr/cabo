//
// Created by simon on 28.03.24.
//

#ifndef CABO_DECK_H
#define CABO_DECK_H
#include "Card.h"
#include "vector"

class Deck {
    private:
        std::vector<Card> cardDeck;
    public:
        Deck();
        void shuffle();
        std::string toString();
};


#endif //CABO_DECK_H
