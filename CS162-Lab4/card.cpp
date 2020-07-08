//
//  card.cpp
//  CS162-Lab4
//
//  Created by Andrea Tongsak on 7/7/20.
//  Copyright © 2020 Andrea Tongsak. All rights reserved.
//

#include "card.hpp"

using namespace std;

// constructor definition, creates a new card
Card::Card(){
    rank = 0;
    suit = 0;
}

Card::Card(int rank, int suit) {
    this->rank = rank;
    this->suit = suit;
}

Card::~Card() {
    // Destructor
}

// Functions

void Card::setCard(int inRank, int inSuit) {
    this->rank = inRank;
    this->suit = inSuit;
}

int Card::getRank() {
    return this->rank;
}

void Card::setRank(int inRank) {
    this->rank = inRank;
}

int Card::getSuit() {
    return this->suit;
}

void Card::setSuit(int inSuit) {
    this->suit = inSuit;
}




