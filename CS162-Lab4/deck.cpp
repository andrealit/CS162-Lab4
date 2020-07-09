//
//  deck.cpp
//  CS162-Lab4
//
//  Created by Andrea Tongsak on 7/7/20.
//  Copyright © 2020 Andrea Tongsak. All rights reserved.
//

#include "deck.hpp"
#include <time.h>
#include <stdlib.h>


Deck::Deck() {
    // use for loop to create and assign suit and rank.
    for(int suit = 0; suit < 4; ++suit) {
        for(int rank = 0; rank < 13; ++rank) {
            // assign each one
            this->deck[suit*13+rank].setRank(rank);
            this->deck[suit*13+rank].setSuit(suit);
        }
    }
    
    // assign number of cards
    this->numCards = 52;
    // shuffle the cards
    shuffleDeck();
}

Deck::~Deck() {
    cout << "Deleting the deck" << endl;
}

// Functions

void Deck::printDeck() {
    // variables
    int suit, rank;
    
    cout << "PRINT OUT DECK" << endl;
    // for loop
    for (int card = 0; card < 52; ++card) {
        // assign the card
        suit = this->deck[card].getSuit();
        rank = this->deck[card].getRank();
        cout << "Card suit: " << suit << ", Card rank: " << rank << endl;
    }
}

// must use C++ rand function
void Deck::shuffleDeck() {
    
    // at this point, already have an array holding the deck
    
    // we also need to use rand when passing in a parameter to the array for a random value to be returned
    
    // srand is used for getting a random value
    // to prevent sequence repetition between runs.
    srand(static_cast<unsigned int>(time(NULL)));
    
    // we need a tempCard
    Card temp;
    
    // use a for loop to shuffle a deck?
    for(int i = 0; i < 52; ++i) {
        // assign a number in the range 0-52
        int j = rand()%52;
        // temp assign to the card at that number
        temp = this->deck[j];
        // assign that card to the current
        this->deck[j] = this->deck[i];
        // assign the current to the temp.
        this->deck[i] = temp;
    }
}

Card Deck::popCard() {
    // temp
    Card temp;
    // decrease decl size
    --this->numCards;
    // return
    return this->deck[numCards];
}
