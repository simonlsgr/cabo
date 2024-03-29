//
// Created by simon on 28.03.24.
//

#include "Card.h"



Card::Card(int cardValue, int cardId, FUNCTION func) {
    this->cardValue = cardValue;
    this->cardId = cardId;
    this->func = func;
}

void Card::setter(int _cardValue, int _cardId, FUNCTION _func) {
    this->cardValue = _cardValue;
    this->cardId = _cardId;
    this->func = _func;
}



