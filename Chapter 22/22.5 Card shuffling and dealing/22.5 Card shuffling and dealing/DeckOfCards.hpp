//
//  DeckOfCards.hpp
//  22.5 Card shuffling and dealing
//
//  Created by ben haywood on 6/8/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef DeckOfCards_hpp
#define DeckOfCards_hpp

#include <stdio.h>
#include <array>

// BitCard structure definition with bit fields
struct BitCard
{
    unsigned face : 4; // 4 bits; 0-15
    unsigned suit : 2; // 2 bits; 0-3
    unsigned color : 1; // 1 bit; 0-1
};

class DeckOfCards
{
public:
    static const int faces{13};
    static const int colors{2};
    static const int numberOfCards{52};
    
    DeckOfCards(); // constructor initalizes deck
    void deal() const;
    
private:
    std::array<BitCard, numberOfCards> deck; // represents deck of cards
};

#endif /* DeckOfCards_hpp */
