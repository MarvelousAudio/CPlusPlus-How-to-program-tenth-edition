//
//  main.cpp
//  Counter-controlled iteration with the while iteration statement
//
//  Created by ben haywood on 7/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
   
    unsigned int counter{1}; // declare and initialize control variable
    
    while (counter <= 10) // loop-continuation condition
    {
        cout << counter << " ";
        ++counter; // increment control variable
    }
    
    cout << endl; // newline
    return 0;
}
