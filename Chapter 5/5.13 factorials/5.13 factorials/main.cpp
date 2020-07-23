//
//  main.cpp
//  5.13 factorials
//
//  Created by ben haywood on 7/23/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    long int factorial = 1;
    
    cout << "N" << setw(50) << "factorials" << endl;
    
    for (int i = 1; i <= 20; i++)
    {
        
        factorial *= i;
        
        cout << i << setw(50) << factorial << endl;
    }
    return 0;
}

//the thing stoping from factoral 100 is the size of the number!
