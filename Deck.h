//
// Created by Bryan Martinez on 12/11/22.
//

#ifndef CANASTA_OPL_DECK_H
#define CANASTA_OPL_DECK_H


#include "card.h"
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

class Deck {
public:
    // Constructor
    Deck();

    // Shuffle the deck
    void shuffle();

    // Deal a card from the top of the deck
    Card deal();

    // Check if the deck is empty
    bool empty() const;

    //Random number generator
    mt19937 rng_;

private:
    std::vector<Card> cards_;
};


#endif //CANASTA_OPL_DECK_H
