//
//  main.cpp
//  Using the bitwise shift operators
//
//  Created by ben haywood on 5/5/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

void displayBits(unsigned); // prototype



int main(int argc, const char * argv[]) {
    // insert code here...
    
    unsigned number1{960};
    
    //deomonstrate bitwise left shift
    cout << "The result of left shifting\n";
    displayBits(number1);
    cout << "8 bit positions using the left-shift operator is \n";
    displayBits(number1 << 8);
    
    // demonstrate bitwise right shift
    cout << "\nThe result of right shifting\n";
    displayBits(number1);
    cout << "8 bit position using the right-shift operator is \n";
    displayBits(number1 >> 8);
    
    
    
    
    return 0;
}


// display bits of an unsigned integer value
void displayBits(unsigned value)
{
    const unsigned SHIFT{8 * sizeof(unsigned) - 1};
    const unsigned MASK{static_cast<const unsigned>(1 << SHIFT)};
    
    cout << setw(10) << value << " = ";
    
    // display bits
    for (unsigned i{1}; i <= SHIFT + 1; ++i)
    {
        cout << (value & MASK ? '1' : '0');
        
        value <<= 1; // shift value left by 1
        
        if (i % 8 == 0) // output a space after 8 bits
        {
            cout << ' ';
        }
    }
    cout << endl;
}
