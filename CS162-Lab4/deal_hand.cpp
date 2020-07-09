//
//  deal_hand.cpp
//  CS162-Lab4
//
//  Created by Andrea Tongsak on 7/7/20.
//  Copyright © 2020 Andrea Tongsak. All rights reserved.
//

#include <iostream>

#include "deck.hpp"
#include "hand.hpp"
#include "card.hpp"

int main() {
    // insert code here...
    
    // Initialize a deck of 52 cards
    Deck testDeck;
    
    // Shuffles the deck
    testDeck.shuffleDeck();
    
    // Deals the hand
    Hand testHand;
    
    // Must deal seven
    Card temp;
    for (int i = 0; i < 7; ++i) {
        temp = testDeck.popCard();
        testHand.addCard(temp);
    }
    
    // Prints out the hand to the console
    testHand.printOut();
    
}
