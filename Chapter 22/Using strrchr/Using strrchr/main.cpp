//
//  main.cpp
//  Using strrchr
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring> // strrchr prototype

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    const char* string1{"A zoo has many animals including zebras"};
    char c{'z'};
    
    cout << "string1 = " << string1 << "\n" << endl;
    cout << "The remainder of string1 beginning with the\n"
    << "last occurence of character '"
    << c << "' is : \"" << strrchr(string1, c) << '\"' << endl;
    
    
    //note: strrchr searches last occurence of second argument
    
    return 0;
}
