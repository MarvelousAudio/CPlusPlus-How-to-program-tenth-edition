//
//  main.cpp
//  Definition of class DeckOfCards that represents a deck of playing cards
//
//  Created by ben haywood on 5/3/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "DeckOfCards.hpp"



int main(int argc, const char * argv[]) {
    // insert code here...
    DeckOfCards deckOfCards; // create DeckOfCards object
    deckOfCards.shuffle(); // shuffle the cards in the deck
    deckOfCards.deal(); // deal the cards in the deck
    return 0;
}
