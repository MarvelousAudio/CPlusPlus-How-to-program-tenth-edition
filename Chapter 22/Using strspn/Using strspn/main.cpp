//
//  main.cpp
//  Using strspn
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring> //strspn protoype

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    const char* string1{"The value is 3.14159"};
    const char* string2{"aehils Tuv"};
    
    cout << "string1 = " << string1 << "\nstring2 = " << string2
    << "\n\nThe length of the initial segment of string1\n"
    << "containing only characters from string2 = "
    << strspn(string1, string2) << endl;
    
    
    //note determines the length of teh initial part of the string in its first argument that contains only
    //characters from the string init second argument. 
    
    return 0;
}
