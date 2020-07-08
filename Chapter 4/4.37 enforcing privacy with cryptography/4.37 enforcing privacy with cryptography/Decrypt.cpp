//
//  Decrypt.cpp
//  4.37 enforcing privacy with cryptography
//
//  Created by ben haywood on 7/7/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include "Decrypt.hpp"
#include <iostream>
using namespace std;



Decrypt::Decrypt(int one, int ten, int hundred, int thousand)
{
    decryptInput(one, ten, hundred, thousand);
    displayDecryptInput();
}

void Decrypt::decryptInput(int one, int ten, int hundred, int thousand)
{
    int swapThirdNOne;
    int swapFourthNSecond;
    
    
    first = thousand + 10 - 7;
    
    if (first >= 10)
    {
        first -= 10;
    }
    
    second = hundred + 10 - 7;
    
    if (second >= 10)
    {
        second -= 10;
    }
    
    third = ten + 10 - 7;
    
    if (third >= 10)
    {
        third -= 10;
    }
    
    fourth = one + 10 - 7;
    
    if (fourth >= 10)
    {
        fourth -= 10;
    }
    
    
    swapThirdNOne = third;
    third = first;
    first = swapThirdNOne;
    
    swapFourthNSecond = fourth;
    fourth = second;
    second = swapFourthNSecond;
}


void Decrypt::displayDecryptInput()
{
    cout << first << second << third << fourth << endl;
}
