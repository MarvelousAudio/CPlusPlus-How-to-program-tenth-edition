//
//  main.cpp
//  4.35 factorial (A)
//
//  Created by ben haywood on 7/1/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>


using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
   
    unsigned int factoral = 1;
    int input = 0;
    
    
    while (true)
    {
        cout << "enter a non-negative number and then press ENTER:\n";
        cin >> input;
        
        if (input >= 0)
        {
            break;
        }
        else
        {
            cout << "number has to be an NON-NEGATIVE!\n";
        }
    }
    
    for (int i = 1; i <= input; ++i)
    {
        factoral *= i;
    }
    
    cout << "Factoral is: " << factoral << endl;
    
    
    return 0;
}
