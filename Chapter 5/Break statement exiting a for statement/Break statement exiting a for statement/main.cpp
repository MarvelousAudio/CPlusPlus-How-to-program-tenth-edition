//
//  main.cpp
//  Break statement exiting a for statement
//
//  Created by ben haywood on 7/8/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned int count; // control variable also used after loop
    
    for (count = 1; count <= 10; count++)
    {
        if (count == 5)
        {
            break; // terminates loop if count is 5
        }
        
        cout << count << " ";
    }
    
    cout << "\nBroke out of loop at count = " << count << endl;
    return 0;
}
