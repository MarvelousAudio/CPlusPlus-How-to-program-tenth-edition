//
//  main.cpp
//  Using strpbrk
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    const char* string1{"This is a test"};
    const char* string2{"beware"};
    
    cout << "Of the characters in \"" << string2 << "\"\n'"
    << *strpbrk(string1, string2) << "\' is the first character "
    << "to appear in\n\"" << string1 << '\"' << endl;
    
    //note: strpbrk is the first char in either string that matches!
    
    return 0;
}
