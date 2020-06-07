//
//  main.cpp
//  Using strstr
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring> // strstr prototype

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    const char* string1{"abcdefabcdef"};
    const char* string2{"def"};
    
    cout << "string1 = " << string1 << "\nstring2 = " << string2
    << "\n\nThe remainder of string1 beginning with the\n"
    << "first occurence of string2 is: "
    << strstr(string1, string2) << endl;
    
    return 0;
}
