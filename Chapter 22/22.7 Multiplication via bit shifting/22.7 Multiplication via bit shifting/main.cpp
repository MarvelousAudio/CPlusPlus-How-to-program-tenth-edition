//
//  main.cpp
//  22.7 Multiplication via bit shifting
//
//  Created by ben haywood on 6/12/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int power2(int number, int power)
{
     return number * pow(2,power);
}


void displayBits(unsigned value, int shiftBy)
{
    const unsigned SHIFT{8 * sizeof(unsigned) - 1};
    const unsigned MASK{static_cast<const unsigned>(1 << SHIFT)};
    //value *= power2(value, int power)
    value = power2(value, shiftBy);
    
    for (unsigned i{1}; i <= SHIFT + 1; ++i)
    {
        cout << (value  & MASK ? '1' : '0');
         value <<= 1;
        
        if (i % 8 == 0)
        {
            cout << ' ';
        }
    }
    
    cout << endl;
}



int main(int argc, const char * argv[]) {
    // insert code here...
    displayBits(2, 2);
   
    return 0;
}






