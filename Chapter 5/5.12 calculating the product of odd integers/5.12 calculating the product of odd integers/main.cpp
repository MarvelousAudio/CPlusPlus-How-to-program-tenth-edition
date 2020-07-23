//
//  main.cpp
//  5.12 calculating the product of odd integers
//
//  Created by ben haywood on 7/23/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int product = 1;
    
    for (int i = 1; i <= 15; i++)
    {
        if (i % 2 != 0)
        {
            product *= i;
        }
    }
    
    cout << "product from 1 to 15 is: " << product << endl;
    
    return 0;
}
