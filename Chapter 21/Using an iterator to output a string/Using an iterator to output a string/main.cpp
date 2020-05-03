//
//  main.cpp
//  Using an iterator to output a string
//
//  Created by ben haywood on 5/2/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    string string1{"Testing iterators"};
    string::const_iterator iterator1{string1.begin()};
    
    
    cout << "string1 = " << string1
    << "\n(Using iterator iterator1) string is: ";
    
    // iterate through string
    while (iterator1 != string1.end())
    {
        cout << *iterator1; // dereference iterator to get char
        ++iterator1; // advance iterator to next char
    }
    
    cout << endl;
    return 0;
}
