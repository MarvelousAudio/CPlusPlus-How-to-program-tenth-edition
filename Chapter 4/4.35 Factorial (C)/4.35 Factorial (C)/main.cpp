//
//  main.cpp
//  4.35 Factorial (C)
//
//  Created by ben haywood on 7/1/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    double e;
    double input;
    
    cout << "Enter a number that raise e by a power to and the press ENTER:" << endl;
    cin >> input;
    
    e = 1.0 + (input / 1.0);
    
    for (int i = 1; i <= input; i++)
    {
        e += (pow(input, i) / (i * (i + 1.0)));
    }
    
    cout << "e to the power of " << input << " is " << e << endl;
    
    return 0;
}
// not accruate but close enough i guess.
