//
//  main.cpp
//  Using strcspn
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    const char* string1{"The value is 3.14159"};
    const char* string2{"1234567890"};
    
    cout << "string1 = " << string1 << "\nstring2 = " << string2
    << "\n\nThe length of the initial segment of string1"
    << "\ncontaining no characters from string2 = "
    << strcspn(string1, string2) << endl;
    
    
    return 0;
}
