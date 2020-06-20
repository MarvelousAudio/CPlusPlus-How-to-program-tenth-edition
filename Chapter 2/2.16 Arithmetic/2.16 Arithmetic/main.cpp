//
//  main.cpp
//  2.16 Arithmetic
//
//  Created by ben haywood on 6/19/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int input1, input2, sum, subracat, multi, divide;
    
    cout << "Enter first number and then press ENTER:\n";
    cin >> input1;
    
    cout << "Enter second number and then press ENTER\n";
    cin >> input2;
    
    sum = input1 + input2;
    
    cout << input1 << " + " << input2 << " = " << sum << endl;
    
    //=====================================================
    
    subracat = input1 - input2;
    
    cout << input1 << " - " << input2 << " = " << subracat << endl;
    
    //==============================================================
    
    multi = input1 * input2;
    
    cout << input1 <<  " * " << input2 << " = " << multi << endl;
    
    //=============================================================
    
    divide = input1 / input2;
    
    cout << input1 << " / " << input2 << " = " << divide << endl;
    
    
    return 0;
}
