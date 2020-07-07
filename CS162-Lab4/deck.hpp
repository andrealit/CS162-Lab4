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

#endif /* deck_hpp */

using namespace std;

class Deck {
    private:
        Card cards[52];
        int numCards;
        int cardIndex;
    public:
        Deck();
        Card dealDeck();
        Card getDeck(int);
        void shuffleDeck();
        ~Deck();
};
