//
//  main.cpp
//  Using strlen
//
//  Created by ben haywood on 6/2/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    const char* string1{"abcdefghijklmnopqrstuvwxyz"};
    const char* string2{"four"};
    const char* string3{"Boston"};
    
    cout << "The length of \"" << string1 << "\" is " << strlen(string1)
    << "\nThe length of \"" << string2 << "\" is " << strlen(string2)
    << "\nThe length of \"" << string3 << "\" is " << strlen(string3)
    << endl;
    
    
    return 0;
}
