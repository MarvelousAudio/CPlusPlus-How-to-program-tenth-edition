//
//  main.cpp
//  Demonstrating input from an istringstream object
//
//  Created by ben haywood on 5/2/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string input{"Input test 123 4.7 A"};
    istringstream inputString{input};
    string string1;
    string string2;
    int integer;
    double double1;
    char character;
    
    
    inputString >> string1 >> string2 >> integer >> double1 >> character;
    
    cout << "The following items were extracted\n"
    << "from the istringstream object:" << "\nstring: " << string1
    << "\nstring: " << string2 << "\n int: " << integer
    << "\ndouble: " << double1 << "\n char: " << character;
    
    //attempt to read from empty stream
    long value;
    inputString >> value;
    
    //test stream results
    if (inputString.good())
    {
        cout << "\n\nlong value is: " << value << endl;
        
    }
    else
    {
        cout << "\n\ninputString is empty" << endl;
    }
    
    return 0;
}
