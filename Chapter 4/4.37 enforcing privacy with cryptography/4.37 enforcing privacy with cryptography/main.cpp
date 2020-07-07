//
//  main.cpp
//  4.37 enforcing privacy with cryptography
//
//  Created by ben haywood on 7/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Encrypt.hpp"



using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Encrpyt encrpyt1{1111};
    
    encrpyt1.encrpytInput();
    encrpyt1.displayEncryptedInput();
    
    
    return 0;
}
