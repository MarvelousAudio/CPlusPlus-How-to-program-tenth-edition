//
//  DeckOfCards.hpp
//  Definition of class DeckOfCards that represents a deck of playing cards
//
//  Created by ben haywood on 5/3/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef DeckOfCards_hpp
#define DeckOfCards_hpp

#include <stdio.h>

//#endif /* DeckOfCards_hpp */

#include <array>
#include <string>


// Card structure definition
struct Card
{
    std::string face;
    std::string suit;
};


class DeckOfCards
{
public:
    static const int numberOfCards{52};
    static const int faces{13};
    static const int suits{4};
    
    DeckOfCards(); // constructor initializes deck
    void shuffle(); // shuffle cards in deck
    void deal() const; //deals cards in deck
    
    
private:
    std::array<Card, numberOfCards> deck; // represents deck of cards
};
#endif /* DeckOfCards_hpp */
