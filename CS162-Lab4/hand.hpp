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
        Card* hand;
        int nCards;
    public:
        Hand();
        ~Hand();
    
        void printOut();
        void addCard(Card cardAdd);
        Card popCardHand(int number);
        int getNumCard();
        void removeCard(int remove);
};

#endif /* hand_hpp */
