//
//  Decrypt.hpp
//  4.37 enforcing privacy with cryptography
//
//  Created by ben haywood on 7/7/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Decrypt_hpp
#define Decrypt_hpp

#include <stdio.h>


class Decrypt
{
public:
    Decrypt(int one, int ten, int hundred, int thousand);
    
    void decryptInput(int one, int ten, int hundred, int thousand);
    
    void displayDecryptInput();
    
    
    //===============================================================================
private:
    
    int first{0};
    int second{0};
    int third{0};
    int fourth{0};
};
#endif /* Decrypt_hpp */
