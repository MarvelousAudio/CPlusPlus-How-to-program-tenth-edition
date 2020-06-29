//
//  main.cpp
//  4.27 palindromes
//
//  Created by ben haywood on 6/28/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int input = 0;
    bool flag = true;
    int tenThousands = 0;
    int thousands = 0;
   
    int tens = 0;
    int ones = 0;
    
    while (flag)
    {
        cout << "input a 5 digit number\n";
        cin >> input;
        
        if ((input / 100000 < 1))
        {
            flag = false;
            break;
        }
        else
        {
            cout << "MUST ENTER 5 DIGIT NUMBER!" << endl;
        }
    }
    ones = input % 10;
    tens = (input % 100) / 10;
    
    thousands = (input % 10000) / 1000;
    tenThousands = input / 10000;
    
    

    if (ones == tenThousands && thousands == tens)
    {
        cout << "Is palidrome" << endl;
    }
    else
    {
        cout << "Not palidrome" << endl;
    }
    return 0;
}
