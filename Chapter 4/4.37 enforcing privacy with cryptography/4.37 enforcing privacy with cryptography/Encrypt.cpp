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
} // end of constructor


//==========================================================================
// member function: encrpytInput
void Encrpyt::encrpytInput()
{
    
    
    
    one = ((input % 10) + 7) % 10;
    ten = (((input % 100) / 10) + 7) % 10;
    hundred = (((input % 1000) /100) + 7) % 10;
    thousand = ((input / 1000) + 7) % 10;
    
}// end of encrpytedInput
   
//===========================================================================

// member function: displayEncryptInput

void Encrpyt::displayEncryptedInput()
{
    
    cout << thousand << hundred << ten << one << endl;
}
