//
//  main.cpp
//  Prefix increment and postfix increment operators
//
//  Created by ben haywood on 6/24/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    // demonstrate postfix increment operator
    unsigned int c{5}; //intializes c with the value 5
    cout << "c before postincrement: " << c << endl; // print 5
    cout << "    postincrementing c: " << c++ << endl; // prints 5
    cout << " c after postincrement: " << c << endl; // prints 6
    
    cout << endl; // skip a line
    
    // demonstrate prefix increment operator
    c = 5; // assigns 5 to c
    cout << " c before preincrement: " << c << endl; // prints 5
    cout << "     preincrementing c: " << ++c << endl; // prints 6
    cout << "  c after preincrement: " << c << endl; // prints 6
    
    return 0;
}
