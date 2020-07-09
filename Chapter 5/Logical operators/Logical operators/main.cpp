//
//  main.cpp
//  Logical operators
//
//  Created by ben haywood on 7/8/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    // create truth table for && (logical AND) operator
    cout << boolalpha << "Logical AND (&&)"
    << "\nfalse && false: " << (false && false)
    << "\nfalse && true: " << (false && true)
    << "\ntrue && false: " << (true && false)
    << "\ntrue && true: " << (true && true) << "\n\n";
    
    // create truth table for || (logical OR) operator
    cout << "Logical OR (||)"
    << "\nfalse || false: " << (false || false)
    << "\nfalse || true: " << (false || true)
    << "\ntrue || false: " << (true || false)
    << "\ntrue || true: " << (true || true) << "\n\n";
    
    //create truth table for ! (logical negation) operator
    cout << "Logical negation (!)"
    << "\n!false: " << (!false)
    << "\n!true: " << (!true) << endl;
    
    return 0;
}
