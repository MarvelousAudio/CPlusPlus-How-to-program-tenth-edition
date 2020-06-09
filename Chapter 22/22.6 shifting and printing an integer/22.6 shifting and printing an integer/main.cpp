//
//  main.cpp
//  22.6 shifting and printing an integer
//
//  Created by ben haywood on 6/8/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

void displayBits(unsigned); // prototype

int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned number1{960};
    // demonstrate bitwise left shitf
    
    cout << "The result of the right shift\n";
    displayBits(number1);
    cout << "4 bit position using the left-shift operator is \n";
    displayBits(number1 >> 4);
    
    return 0;
}

void displayBits(unsigned value)
{
    const unsigned SHIFT{ 4 * sizeof(unsigned) - 1};
    const unsigned MASK{static_cast<const unsigned>(1 << SHIFT)};
    
    
    cout << setw(10) << value << " = " ;
    
    //display bits
    
    for (unsigned i{1}; i <= SHIFT + 1; ++ i)
    {
        cout << (value & MASK ? '1' : '0');
        value <<= 1; // shift value to left by 1
        
        if ( i % 8 == 0) // output a space after 8 bits
        {
            cout << ' ';
        }
    }
    cout << endl;
}
