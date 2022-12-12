//
// Created by Bryan Martinez on 12/11/22.
//

#include "Card.h"

// card.cpp

#include "card.h"

Card::Card(Suit suit, Rank rank) : suit_(suit), rank_(rank) {}

Card::Suit Card::suit() const { return suit_; }
Card::Rank Card::rank() const { return rank_; }
