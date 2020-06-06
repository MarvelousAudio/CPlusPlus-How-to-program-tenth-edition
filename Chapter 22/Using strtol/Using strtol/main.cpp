//
//  main.cpp
//  Using strtol
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstdlib> // strtol prototype

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
   
    const char* string1{"-1234567abc"};
    char* remainderPtr{nullptr};
    
    long x{strtol(string1, &remainderPtr, 0)}; // convert to long
    
    cout << "The original string is \"" << string1
    << "\"\nThe converted value is " << x
    << "\nThe remainder of the orginal string is \"" << remainderPtr
    << "\"\nThe converte value plus 567 is " << x + 567 << endl;
    return 0;
}
