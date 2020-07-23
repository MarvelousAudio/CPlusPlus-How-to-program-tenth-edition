//
//  main.cpp
//  5.11 find the smallest value
//
//  Created by ben haywood on 7/23/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int numOfInputs;
    int inputs;
    int smallest = 0;
    
    
    cout << "Enter the number of inputs and then press enter!" << endl;
    cin >> numOfInputs;
    
    
    for (int i = 0; i < numOfInputs; i++)
    {
        cout << "enter input and then press enter!" << endl;
        cin >> inputs;
        
        if (i == 0)
        {
            smallest = inputs;
        }
        
        if (inputs < smallest)
        {
            smallest = inputs;
        }
    }
    
    cout << "Smallest input is: " << smallest << endl;
    return 0;
}
