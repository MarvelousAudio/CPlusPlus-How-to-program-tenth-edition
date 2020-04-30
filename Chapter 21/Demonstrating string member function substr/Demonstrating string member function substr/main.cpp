//
//  main.cpp
//  Demonstrating string member function substr
//
//  Created by ben haywood on 4/30/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    string string1{"The airplane landed on time."};
    
    //retrieve substring "plane" which
    //begines at subscript 7 and constist of 5 characters
    
    cout << string1.substr(7,5) << endl;
    
    return 0;
}
