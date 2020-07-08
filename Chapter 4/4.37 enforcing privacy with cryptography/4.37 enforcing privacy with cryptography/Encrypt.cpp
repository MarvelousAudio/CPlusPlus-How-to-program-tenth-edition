//
//  Encrypt.cpp
//  4.37 enforcing privacy with cryptography
//
//  Created by ben haywood on 7/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include "Encrypt.hpp"
#include <iostream>

using namespace std;

// constructor
Encrpyt::Encrpyt(int number)
{
    if (number <= 9999 && number >= 1000)
    {
        input = number;
    }
    cout << number << endl;
    encrpytInput();
    displayEncryptedInput();
} // end of constructor


//==========================================================================
// member function: encrpytInput
void Encrpyt::encrpytInput()
{
    
    int swapFirstNThird;
    int swapSecondNFourth;
    
    one = ((input % 10) + 7) % 10;
    ten = (((input % 100) / 10) + 7) % 10;
    hundred = (((input % 1000) /100) + 7) % 10;
    thousand = ((input / 1000) + 7) % 10;
    
    swapFirstNThird = hundred;
    hundred = one;
    one = swapFirstNThird;
    
    swapSecondNFourth = ten;
    ten = thousand;
    thousand = swapSecondNFourth;
    
}// end of encrpytedInput
   
//===========================================================================

// member function: displayEncryptInput

void Encrpyt::displayEncryptedInput()
{
    
    cout << one << ten << hundred << thousand << endl;
}


//===========================================================================

int Encrpyt::getOne() const
{
    return one;
}


//============================================================================

int Encrpyt::getTen() const
{
    return ten;
}

//==============================================================================

int Encrpyt::getHundred() const
{
    return hundred;
}


//===============================================================================

int Encrpyt::getThousand() const
{
    return thousand;
}
