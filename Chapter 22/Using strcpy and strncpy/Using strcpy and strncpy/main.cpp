//
//  main.cpp
//  Using strcpy and strncpy
//
//  Created by ben haywood on 6/2/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring> // prototypes for strcpy and strncpy

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char x[] {"Happy Birthday to You"}; // string length 21
    char y[25];
    char z[15];
    
    strcpy(y, x); // copy contents of x into y
    
    cout << "The string in array x is: " << x
    << "\nThe string in array y is: " << y << '\n';
    
    
    // copy first 14 characters of x into z
    strncpy(z, x, 14); // does not copy null character
    z[14] = '\0'; // append '\0' to z's contents
    
    cout << "The string in array z is: " << z << endl;
    return 0;
}
