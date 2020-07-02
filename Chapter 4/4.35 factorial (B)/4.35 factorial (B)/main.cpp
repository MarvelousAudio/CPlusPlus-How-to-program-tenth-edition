//
//  main.cpp
//  4.35 factorial (B)
//
//  Created by ben haywood on 7/1/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>


using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    double e = 2.0;
    int input;
    
    cout << "Enter a number to calculat how accurate const e will be and the press ETNER:" << endl;
    
    cin >> input;
    
    for (int i = 1; i <= input; ++i)
    {
        e += 1.0 / (i * (i + 1.0));
    }
    
    cout << "e: " << e << endl;
    return 0;
}
