//
//  main.cpp
//  2.18 comparing integers
//
//  Created by ben haywood on 6/19/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int input1, input2;
    
    cout << "Enter input 1 and then press ENTER\n";
    cin >> input1;
    
    cout << "Enter input 2 and then press ENTER\n";
    cin >> input2;
    
    if (input1 > input2)
    {
        cout << "input 1 is larger than input 2" << endl;
    }
    else if (input2 > input1)
    {
        cout << "input 2 is larger than input 1" << endl;
        
    }
    else if (input2 == input1)
    {
        cout << "booth inputs are equal" << endl;
    }
    return 0;
}
