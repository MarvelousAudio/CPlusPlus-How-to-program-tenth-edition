//
//  main.cpp
//  4.30 Multiples of 2 with an infiinit loop
//
//  Created by ben haywood on 7/1/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int i = 0;
    
    
    while (true)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        
        i++;
    }
    return 0;
}
