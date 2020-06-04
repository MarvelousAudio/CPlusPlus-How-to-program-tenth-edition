//
//  DeckOfCards.cpp
//  Card shuffling and dealing program
//
//  Created by ben haywood on 6/3/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "DeckOfCards.h" // DeckOfCards class definition

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


// dealing cards in deck

void DeckOfCards::deal() const
{
    for (size_t k1{0}, k2{k1 + deck.size() / 2 }; k1 < deck.size() / 2 - 1; ++k1, ++k2)
    {
        cout << "Card:" << setw(3) << deck[k1].face
        << " suit:" << setw(2) << deck[k1].suit
        << " color:" << setw(2) << deck[k1].color
        << "  " << "Card:" << setw(3) << deck[k2].face
        << " suit:" << setw(2) << deck[k2].suit
        << " Color:" << setw(2) << deck[k2].color << endl;
        
    }
}
