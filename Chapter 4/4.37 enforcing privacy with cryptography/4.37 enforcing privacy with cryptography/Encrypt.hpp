//
//  Encrypt.hpp
//  4.37 enforcing privacy with cryptography
//
//  Created by ben haywood on 7/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Encrypt_hpp
#define Encrypt_hpp

#include <stdio.h>

class Encrpyt
{
public:
    
    Encrpyt(int number);
    
    
    void encrpytInput();
    
    
    
    void displayEncryptedInput();
    
    //=================================================================
private:
    int input = 0;
    
    int one = 0;
    int ten = 0;
    int hundred = 0;
    int thousand = 0;
    
}; // end of class Encrpyt
#endif /* Encrypt_hpp */
