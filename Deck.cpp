//
// Created by Bryan Martinez on 12/11/22.
//

#include "Deck.h"

#include "card.h"
#include <vector>
#include <random>

#include <algorithm>

Deck::Deck() {
    // Create a deck with 2 Jokers, 2 Deuces, and 4 copies of each other card
    cards_.reserve(108);
    for (int i = 0; i < 2; ++i) {
        cards_.emplace_back(Card::Suit::Joker, Card::Rank::Joker);
        cards_.emplace_back(Card::Suit::Spade, Card::Rank::Deuce);
        cards_.emplace_back(Card::Suit::Club, Card::Rank::Deuce);
    }
    for (int s = 0; s < 4; ++s) {
        for (int r = 1; r <= 13; ++r) {
            cards_.emplace_back(Card::Suit(s), Card::Rank(r));
        }
    }
    rng_.seed(std::random_device()());
}

void Deck::shuffle() {
    std::shuffle(cards_.begin(), cards_.end(), rng_);
}

Card Deck::deal() {
    Card card = cards_.back();
    cards_.pop_back();
    return card;
}

bool Deck::empty() const {
    return cards_.empty();
}
