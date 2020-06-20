//
//  main.cpp
//  2.25 multiples
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int input1, input2;
    
    cout << "Enter two numbers and then press ENTER" << endl;
    cin >> input1 >> input2;
    
    cout << (input2 % input1 == 0 ? " the first is a multiple of the second": "not a multiple") << endl;
    
    
    return 0;
}
