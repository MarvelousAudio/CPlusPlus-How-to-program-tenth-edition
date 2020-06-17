//
//  main.cpp
//  Comparing integers using if statements, relational operators and equality operators
//
//  Created by ben haywood on 6/16/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int number1{0};  // first int to compare (initialized to 0)
    int number2{0}; // second int to compare (initialized to 0)
    
    cout << "Enter two integers to compare: "; // prompt user for data
    cin >> number1 >> number2; // read two integers from user
    
    
    if (number1 == number2)
    {
        cout << number1 << " == " << number2 << endl;
        
    }
    
    if (number1 != number2)
    {
        
        cout << number1 << " != " << number2 << endl;
    }
    
    if (number1 < number2)
    {
        
        cout << number1 << " < " << number2 << endl;
        
    }
    
    if (number1 > number2)
    {
        
        cout << number1 << " > " << number2 << endl;
    }
    
    if (number1 <= number2)
    {
        cout << number1 << " <= " << number2 << endl;
    }
    
    if (number1 >= number2)
    {
        cout << number1 << " >= " << number2 << endl;
    }
    return 0;
}
