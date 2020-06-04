//
//  main.cpp
//  Card shuffling and dealing program
//
//  Created by ben haywood on 6/3/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "DeckOfCards.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    DeckOfCards deckOfCards; // create DeckOfCards object
    deckOfCards.deal(); // deal the cards in the deck
    
    return 0;
}
