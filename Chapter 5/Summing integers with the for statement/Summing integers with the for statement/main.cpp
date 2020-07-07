//
//  main.cpp
//  Summing integers with the for statement
//
//  Created by ben haywood on 7/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned int total{0};
    
    // total even integers from 2 through 20
    for (unsigned int number{2}; number <= 20; number += 2)
    {
        total += number;
    }
    
    cout << "Sum is " << total << endl;
    
    return 0;
}
