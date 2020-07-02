//
//  main.cpp
//  4.28 printing the decimal equivalent of a binary number
//
//  Created by ben haywood on 6/28/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int input; // holds binary number
    int output; // outputs in base 10
    int ones;
    int tens;
    int hundres;
    int thouthands;
    
    
    while (true)
    {
        cout << "Enter binary number up to four digits and then press ENTER:\n";
        cin >> input;
        
        if (input <= 1111)
        {
            break;
        }
        else
        {
            cout << "need to be a four digit binary number!\n";
        }
    }
    
    ones = (input % 10);
    tens = (input % 100) / 10;
    hundres = (input % 1000) / 100;
    thouthands = (input / 1000);
    
    output = (thouthands * 8) + ( hundres * 4) + (tens * 2) + (ones * 1);
    
    cout << input << " input binary is " << output << endl;
    
    
    
    return 0;
}
