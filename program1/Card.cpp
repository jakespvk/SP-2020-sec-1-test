// Jake Spievak
// CECS282-7
// Program 1 - Solitaire Prime
// 2-12-20

#include <iostream>
#include "Card.h"
using namespace std;

Card::Card() {
    suit = 'Z';
    rank = 'Z';
}

Card::Card(char r, char s) {
    suit = s;
    rank = r;
}

void Card::setCard(char r, char s) {
    rank = r;
    suit = s;
}

int Card::getValue() {
    if (rank == 'T' || rank == 'J' || rank == 'Q' ||
     rank == 'K') {
        return 10;
    }
    else if (rank == 'A')
        return 11;
    else
        return (int) rank;
}

void Card::showCard() {
    cout << rank << suit << endl;
}