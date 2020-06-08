//
//  main.cpp
//  22.4 defining structures
//
//  Created by ben haywood on 6/7/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

struct Inventory
{
    char partName[30];
    int partNumber;
    float price;
    int stock, reorder;
    
};

struct Address
{
    char streetAddress[25];
    char city[20];
    char state[3];
    char zipCode[6];
    
};


struct Test
{
    unsigned a : 1;  
    unsigned b : 1;
    unsigned c : 1;
    unsigned d : 1;
    unsigned e : 1;
    unsigned f : 1;
    unsigned g : 1;
    unsigned h : 1;
    unsigned i : 1;
    unsigned j : 1;
    unsigned k : 1;
    unsigned l : 1;
    unsigned m : 1;
    unsigned n : 1;
    unsigned o : 1;
    unsigned p : 1;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
