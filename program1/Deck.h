// Jake Spievak
// CECS282-7
// Program 1 - Solitaire Prime
// 2-12-20

#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck {

private:
    Card storage[52];
    int top;
public:
    Deck();
    void refreshDeck();
    Card deal();
    void shuffle();
    void showDeck();
    int cardsLeft();
};

#endif