//
//  main.cpp
//  4.34 sides of a right triangle
//
//  Created by ben haywood on 7/1/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>


using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int leg1;
    int leg2;
    int hypot;
    
    while (true)
    {
        cout << "Enter length of leg 1: " << endl;
        cin >> leg1;
        
        cout << "Enter length of leg 2: " << endl;
        cin >> leg2;
        
        cout << "Enter length of hypotenuse: " << endl;
        cin >> hypot;
        
        if (leg1 != 0 && leg2 != 0 && hypot != 0)
        {
            break;
        }
        else
        {
            cout << "one of the sides equals to 0! please enter again!" << endl;
        }
    }
    
    if (leg1 + leg2 > hypot)
    {
        cout << "its a right triangle!" << endl;
    }
    else
    {
        cout << "is not a right triangle!" << endl;
    }
    return 0;
}

// need to check if legs have to greater than hypentuse is right
