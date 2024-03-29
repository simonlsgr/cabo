//
// Created by simon on 28.03.24.
//

#ifndef CABO_CARD_H
#define CABO_CARD_H


enum FUNCTION {PEEK, SPY, SWAP, NONE};

class Card {
    public:
        Card(int cardValue, int cardId, FUNCTION func);
        void setter(int cardValue, int cardId, FUNCTION func);
        int cardValue;
        int cardId;
        FUNCTION func;
};


#endif

