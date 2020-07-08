//
//  card.hpp
//  CS162-Lab4
//
//  Created by Andrea Tongsak on 7/7/20.
//  Copyright © 2020 Andrea Tongsak. All rights reserved.
//

#ifndef card_hpp
#define card_hpp

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

 /* card_hpp */

class Card {
    private:
        int rank; // Should be in the range 0-12
        int suit; // Should be in the range 0-3
    public:
    // constructors, destructor, accessors, and mutators
        Card();
        // destructor
        Card(int rank, int suit);
        ~Card();
    
        void setCard(int, int);
        int getRank();
    
        void setRank(int);
        int getSuit();
    
        void setSuit(int);
        
};

#endif


