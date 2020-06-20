//
//  main.cpp
//  2.28 digits of an integer
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int tenThou, thou, hundreds, tens, ones, input;
    
    cout << "Enter a 5 digit number and then press enter" << endl;
    cin >> input;
    
    ones = input % 10;
    tens = (input % 100 - ones) / 10;
    hundreds = (input % 1000 - tens - ones) / 100;
    thou = (input % 10000 - hundreds - tens - ones) / 1000;
    tenThou = input / 10000;
    
    cout <<  tenThou << " " << thou << " " << hundreds << " " << tens << " " << ones << endl;
    return 0;
}
