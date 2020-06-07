//
//  main.cpp
//  Using memset
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring> // memset prototype

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    char string1[15]{"BBBBBBBBBBBBBB"};
    
    cout << "string1 = " << string1 << endl;
    cout << "string1 after memset = "
    << static_cast<char*>(memset(string1, 'b', 7)) << endl;
    
    
    // sets seven b's and replace them in sting1
    return 0;
}
