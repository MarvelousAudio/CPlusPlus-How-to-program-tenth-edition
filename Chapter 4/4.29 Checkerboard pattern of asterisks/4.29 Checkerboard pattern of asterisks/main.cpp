//
//  main.cpp
//  4.29 Checkerboard pattern of asterisks
//
//  Created by ben haywood on 7/1/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    
    for (int x = 0; x < 8; ++x)
    {
        for (int i = 0; i < 8; ++i)
        {
            if (x % 2 == 0)
            {
                cout << "* ";
            }
            
            if (i == 0 && x % 2 == 1)
            {
                cout << " ";
            }
            
            if ( x % 2 == 1 && i != 0)
            {
                cout << "* ";
            }
            
            if (i == 7 && x % 2 == 1)
            {
                cout << "* ";
            }
            
        }
        cout << endl;
    }
    return 0;
}
