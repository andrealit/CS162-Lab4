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

void Card::setCard(int inRank, int inSuit) {
    rank = inRank;
    suit = inSuit;
}

int Card::getRank() {
    return rank;
}

int Card::getSuit() {
    return suit;
}

Card::~Card() {
    // Destructor
}

