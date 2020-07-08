//
//  deck.hpp
//  CS162-Lab4
//
//  Created by Andrea Tongsak on 7/7/20.
//  Copyright © 2020 Andrea Tongsak. All rights reserved.
//

#ifndef deck_hpp
#define deck_hpp

#include <stdio.h>

#include "card.hpp"

using namespace std;

class Deck {
    private:
        Card deck[52];
        int numCards;
    public:
        Deck();
        //Card dealDeck();
        void printDeck();
        void shuffleDeck();
        Card popCard();
        ~Deck();
};

#endif /* deck_hpp */
