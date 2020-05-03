//
//  main.cpp
//  Demonstrating class string insert memeber functions
//
//  Created by ben haywood on 5/1/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    string string1{"beginning end"};
    string string2{"middle "};
    string string3{"12345678"};
    string string4{"xx"};
    
    cout << "Initial string:\nstring1: " << string1
    << "\nstring2: " << string2 << "\nstring3: " << string3
    << "\nstring4: " << string4 << "\n\n";
    
    
    // insert "middle" at location 10 in string1
    string1.insert(10, string2);
    
    
    // insert "xx" at location 3 in string3
    string3.insert(3, string4, 0, string::npos);
    
    cout << "String after insert:\nstring1: " << string1
    << "\nstring2: " << string2 << "\nstring3: " << string3
    << "\nstring4: " << string4 << endl;
    
    
    return 0;
}
