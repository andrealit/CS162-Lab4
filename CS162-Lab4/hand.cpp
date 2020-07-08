//
//  hand.cpp
//  CS162-Lab4
//
//  Created by Andrea Tongsak on 7/7/20.
//  Copyright © 2020 Andrea Tongsak. All rights reserved.
//

#include "hand.hpp"

Hand::Hand() {
    this->hand = new Card[52];
    this->nCards = 0;
}

Hand::~Hand() {
    delete [] this->hand;
}

// Functions
void Hand::printOut() {
    // print out hand using loop
    int suit, rank;
    
    cout << "PRINT OUT HAND" << endl;
    
    for (int i = 0; i < this->nCards; ++i) {
        suit = this->hand[i].getSuit();
        rank = this->hand[i].getRank();
        
        cout << "Card suit: " << suit << ", Card rank: " << rank << endl;
        
    }
}

void Hand::addCard(Card cardAdd) {
    // assign a new array spot to that Card
    this->hand[this->nCards] = cardAdd;
    // increase the size of the hannd
    ++this->nCards;
}

Card Hand::popCardHand(int number) {
    Card temp;
    // created a card with a fake rank and suit
    Card goFishCard(-1,-1);
    
    // for loop to go through the hand
    for (int i = 0; i < this->nCards; ++i) {
        if(this->hand[i].getRank()==number) {
            // need to get rid of a card, so save the current
            temp = this->hand[i];
            // assign the current to the last,
            this->hand[i] = this->hand[this->nCards-1];
            // then assign the last to temp
            this->hand[this->nCards-1] = temp;
            
            // the array size is now bigger than it should be
            // can we resize this? no, too much of a hassle lmao
            // let's just assign a large number (hm)
            this->hand[nCards-1].setRank(100);
            this->hand[nCards-1].setSuit(100);
            
            --this->nCards;
            
            // returns the card we remvoed
            return temp;
        }
    }
    
    // return that we didn't need to return
    return goFishCard;
}


int Hand::getNumCard() {
    return (this->nCards);
}

void Hand::removeCard(int remove) {
    //int numCardRemoved;
    Card temp;
    
    do {
        temp = popCardHand(remove);
        
        // if statement to make sure the number is correct
    } while (temp.getRank() != -1);
}
