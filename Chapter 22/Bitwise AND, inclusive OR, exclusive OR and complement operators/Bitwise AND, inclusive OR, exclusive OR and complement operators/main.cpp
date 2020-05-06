//
//  main.cpp
//  Bitwise AND, inclusive OR, exclusive OR and complement operators
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
   
    
    // demonstrate bitwise &
    unsigned number1{2179876355};
    unsigned mask1{1};
    
    cout << "The result of combing the following\n";
    displayBits(number1);
    displayBits(mask1);
    cout << "using the bitwise AND operator & is \n";
    displayBits(number1 & mask1);
    
    // demostrate bitwise |
    
    unsigned setBits{241};
    cout << "\nThe result of combining the following\n";
    displayBits(number1);
    displayBits(setBits);
    cout << "using the bitwise inclusive OR operator | is \n";
    displayBits(number1 | setBits);
    
    
    
    // demonstarte bitwise exclusive OR
    number1 = 139;
    unsigned number2{199};
    cout << "\nThe result of the combining the following\n";
    displayBits(number1);
    displayBits(number2);
    cout  << "using the bitwise exclusive OR operator ^ is \n";
    displayBits(number1 ^ number2);
    
    // demonstrate bitwise complement
    number1 = 21845;
    cout << "\nThe one's complement of\n";
    displayBits(number1);
    cout << "is" << endl;
    displayBits(~number1);
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
        
        if (i % 8 == 0)
        {
            cout << ' ';
            
        }
    }
    
    cout << endl;
}
