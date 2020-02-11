// Jake Spievak
// CECS282-7
// Program 1 - Solitaire Prime
// 2-12-20

#include <iostream>
#include "Deck.h"
using namespace std;

int main() {

    Deck myDeck;
    int choice = 0;

    do {
        cout << "Welcome to Solitaire Prime!\n1) New Deck\n2) Display Deck\n"
                "3) Shuffle Deck\n4) Play Solitaire Prime\n5) Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            myDeck.refreshDeck();
        }
        else if (choice == 2) {
            myDeck.showDeck();
        }
        else if (choice == 3) {
            myDeck.shuffle();
        }
        else if (choice == 4) {

        }

    } while (choice != 5);

    return 0;
}
