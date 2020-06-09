//
//  DeckOfCards.cpp
//  22.5 Card shuffling and dealing
//
//  Created by ben haywood on 6/8/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include "DeckOfCards.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

DeckOfCards::DeckOfCards()
{
    for (size_t i{0}; i < deck.size(); ++i)
    {
        deck[i].face = i % faces; // faces in order
        deck[i].suit = i / faces; // suits in order
        deck[i].color = i / (faces * colors); // colors in order
    }
}


void DeckOfCards::deal() const
{
    for (size_t k1{0}, k2{k1 + deck.size() / 2}; k1 < deck.size() / 2 - 1; ++k1, ++k2)
    {
        cout << right << setw(5) << "Card:" << setw(3) << deck[k1].face
        << " of " << left << setw(8) << "Suit:" << setw(2) << deck[k1].suit
        << " Color:" << setw(2) << deck[k1].color << endl;
    }
    
}
