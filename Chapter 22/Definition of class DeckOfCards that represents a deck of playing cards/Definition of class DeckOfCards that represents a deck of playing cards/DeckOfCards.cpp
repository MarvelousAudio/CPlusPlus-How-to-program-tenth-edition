//
//  DeckOfCards.cpp
//  Definition of class DeckOfCards that represents a deck of playing cards
//
//  Created by ben haywood on 5/3/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include "DeckOfCards.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "DeckOfCards.hpp"

using namespace std;

DeckOfCards::DeckOfCards()
{
    //initialize suit array
    static string suit[suits]{"Hearts", "Diamonds", "Clubs", "Spades"};
    
    // initialize face array
    static string face[faces]{"Ace", "Deuce", "Three", "Four" , "Five" , "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    
    // set values for deck of 52 Cards
    for (size_t i{0}; i < deck.size(); ++i)
    {
        deck[i].face = face[i % faces];
        deck[i].suit = suit[i / faces];
    }
    
    srand(static_cast<size_t>(time(nullptr))); // seed
}

// shuffle cards in deck
void DeckOfCards::shuffle()
{
    // shuffle cards randomly
    for (size_t i{0}; i < deck.size(); ++i)
    {
        int j{rand() % numberOfCards};
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

// deal cards in deck
void DeckOfCards::deal() const
{
    // display each card's face and suit
    for (size_t i = 0; i < deck.size(); ++i)
    {
        cout << right << setw(5) << deck[i].face << " of "
        << left << setw(8) << deck[i].suit
        << ((i+1) % 2 ? '\t' : '\n');
    }
}
