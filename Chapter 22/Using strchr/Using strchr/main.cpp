//
//  main.cpp
//  Using strchr
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring> // strchr prototype

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    const char* string1{"This is a test"};
    char character1{'a'};
    char character2{'z'};
    
    // search for character1 in string1
    if (strchr(string1, character1) != NULL)
    {
        cout << '\'' << character1 << "' was found in \""
        << string1 << "\".\n";
    }
    else
    {
        cout << '\'' << character1 << "' was not found in \""
        << string1 << "\".\n";
    }
    
    // search for character2 in string1
    if (strchr(string1, character2) != NULL)
    {
        cout << '\'' << character2 << "' was found in \""
        << string1 << "\".\n";
    }
    else
    {
        cout << '\'' << character2 << "' was not found in \""
        <<  string1 << "\"." << endl;
        
    }
    
    return 0;
}
