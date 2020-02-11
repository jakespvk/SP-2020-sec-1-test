// Jake Spievak
// CECS282-7
// Program 1 - Solitaire Prime
// 2-12-20

#include <iostream>
#include "Deck.h"
using namespace std;

Deck::Deck() {
    top = 0;
    storage[0].setCard('2', 'S');
    storage[1].setCard('3', 'S');
    storage[2].setCard('4', 'S');
    storage[3].setCard('5', 'S');
    storage[4].setCard('6', 'S');
    storage[5].setCard('7', 'S');
    storage[6].setCard('8', 'S');
    storage[7].setCard('9', 'S');
    storage[8].setCard('T', 'S');
    storage[9].setCard('J', 'S');
    storage[10].setCard('Q', 'S');
    storage[11].setCard('K', 'S');
    storage[12].setCard('A', 'S');
    storage[13].setCard('2', 'H');
    storage[14].setCard('3', 'H');
    storage[15].setCard('4', 'H');
    storage[16].setCard('5', 'H');
    storage[17].setCard('6', 'H');
    storage[18].setCard('7', 'H');
    storage[19].setCard('8', 'H');
    storage[20].setCard('9', 'H');
    storage[21].setCard('T', 'H');
    storage[22].setCard('J', 'H');
    storage[23].setCard('Q', 'H');
    storage[24].setCard('K', 'H');
    storage[25].setCard('A', 'H');
    storage[26].setCard('2', 'C');
    storage[27].setCard('3', 'C');
    storage[28].setCard('4', 'C');
    storage[29].setCard('5', 'C');
    storage[30].setCard('6', 'C');
    storage[31].setCard('7', 'C');
    storage[32].setCard('8', 'C');
    storage[33].setCard('9', 'C');
    storage[34].setCard('T', 'C');
    storage[35].setCard('J', 'C');
    storage[36].setCard('Q', 'C');
    storage[37].setCard('K', 'C');
    storage[38].setCard('A', 'C');
    storage[39].setCard('2', 'D');
    storage[40].setCard('3', 'D');
    storage[41].setCard('4', 'D');
    storage[42].setCard('5', 'D');
    storage[43].setCard('6', 'D');
    storage[44].setCard('7', 'D');
    storage[45].setCard('8', 'D');
    storage[46].setCard('9', 'D');
    storage[47].setCard('T', 'D');
    storage[48].setCard('J', 'D');
    storage[49].setCard('Q', 'D');
    storage[50].setCard('K', 'D');
    storage[51].setCard('A', 'D');
}

void Deck::refreshDeck() {
    top = 0;
    storage[0].setCard('2', 'S');
    storage[1].setCard('3', 'S');
    storage[2].setCard('4', 'S');
    storage[3].setCard('5', 'S');
    storage[4].setCard('6', 'S');
    storage[5].setCard('7', 'S');
    storage[6].setCard('8', 'S');
    storage[7].setCard('9', 'S');
    storage[8].setCard('T', 'S');
    storage[9].setCard('J', 'S');
    storage[10].setCard('Q', 'S');
    storage[11].setCard('K', 'S');
    storage[12].setCard('A', 'S');
    storage[13].setCard('2', 'H');
    storage[14].setCard('3', 'H');
    storage[15].setCard('4', 'H');
    storage[16].setCard('5', 'H');
    storage[17].setCard('6', 'H');
    storage[18].setCard('7', 'H');
    storage[19].setCard('8', 'H');
    storage[20].setCard('9', 'H');
    storage[21].setCard('T', 'H');
    storage[22].setCard('J', 'H');
    storage[23].setCard('Q', 'H');
    storage[24].setCard('K', 'H');
    storage[25].setCard('A', 'H');
    storage[26].setCard('2', 'C');
    storage[27].setCard('3', 'C');
    storage[28].setCard('4', 'C');
    storage[29].setCard('5', 'C');
    storage[30].setCard('6', 'C');
    storage[31].setCard('7', 'C');
    storage[32].setCard('8', 'C');
    storage[33].setCard('9', 'C');
    storage[34].setCard('T', 'C');
    storage[35].setCard('J', 'C');
    storage[36].setCard('Q', 'C');
    storage[37].setCard('K', 'C');
    storage[38].setCard('A', 'C');
    storage[39].setCard('2', 'D');
    storage[40].setCard('3', 'D');
    storage[41].setCard('4', 'D');
    storage[42].setCard('5', 'D');
    storage[43].setCard('6', 'D');
    storage[44].setCard('7', 'D');
    storage[45].setCard('8', 'D');
    storage[46].setCard('9', 'D');
    storage[47].setCard('T', 'D');
    storage[48].setCard('J', 'D');
    storage[49].setCard('Q', 'D');
    storage[50].setCard('K', 'D');
    storage[51].setCard('A', 'D');
}

Card Deck::deal() {
    return storage[top++];
}

void Deck::shuffle() {
    for (int i = 0; i < 52; i++) {
        int num = rand() % 52;
        Card temp = storage[i];
        storage[i] = storage[i + num];
        storage[i + num] = temp;
    }
}

void Deck::showDeck() {
    // this is wrong

    for (int i = 0; i < cardsLeft(); i++) {
        storage[cardsLeft() + i - 1].showCard();
    }
}

int Deck::cardsLeft() {
    return 52 - top;
}