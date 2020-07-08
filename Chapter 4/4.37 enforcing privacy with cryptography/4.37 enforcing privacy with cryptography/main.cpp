//
//  main.cpp
//  4.37 enforcing privacy with cryptography
//
//  Created by ben haywood on 7/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Encrypt.hpp"
#include "Decrypt.hpp"


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Encrpyt encrpyt1{1234};
    Decrypt decrpyt1{encrpyt1.getOne(), encrpyt1.getTen(), encrpyt1.getHundred(), encrpyt1.getThousand()};
    
    
    
    return 0;
}
