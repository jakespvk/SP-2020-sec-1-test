// Jake Spievak
// CECS282-7
// Program 1 - Solitaire Prime
// 2-12-20

#ifndef CARD_H
#define CARD_H

class Card {

private:
    char rank, suit;
public:
    Card();
    Card(char, char);
    void setCard(char r, char s);
    int getValue();
    void showCard();
};

#endif