//
//  hand.hpp
//  CS162-Lab4
//
//  Created by Andrea Tongsak on 7/7/20.
//  Copyright © 2020 Andrea Tongsak. All rights reserved.
//

#ifndef hand_hpp
#define hand_hpp

#include <stdio.h>
#include "card.hpp"

using namespace std;

class Hand {
    private:
        Card* cards;
        int nCards;
    public:
        Hand();
        Hand(const Hand&);
        void printOut();
        Card* getHand();
        Card* addCard();
        void setCard(Card);
        int getNumCard();
        void removeCard(int);
        ~Hand();
};

#endif /* hand_hpp */
