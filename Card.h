//
// Created by Bryan Martinez on 12/11/22.
//

#ifndef CANASTA_OPL_CARD_H
#define CANASTA_OPL_CARD_H


// card.h

class Card {
public:
    enum class Suit { Heart, Diamond, Spade, Club, Joker };
    enum class Rank {
        Ace = 1, King = 13, Queen = 12, Jack = 11, Ten = 10, Nine = 9,
        Eight = 8, Seven = 7, Six = 6, Five = 5, Four = 4, Deuce = 2, Joker = 0
    };

    // Constructor
    Card(Suit suit, Rank rank);

    // Accessors
    Suit suit() const;
    Rank rank() const;

private:
    Suit suit_;
    Rank rank_;
};


#endif //CANASTA_OPL_CARD_H
