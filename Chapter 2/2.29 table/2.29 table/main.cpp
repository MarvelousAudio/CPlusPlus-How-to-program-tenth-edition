//
//  main.cpp
//  2.29 table
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << "integer " << "square " << "cube" << endl;
    cout <<  0 << setw(8) << setfill(' ') << pow(0, 2) << setw(8) << setfill(' ') << pow(0, 3) << endl;
    cout <<  1 << setw(8) << setfill(' ') << pow(1, 2) << setw(8) << setfill(' ') << pow(1, 3) << endl;
    cout <<  2 << setw(8) << setfill(' ') << pow(2, 2) << setw(8) << setfill(' ') << pow(2, 3) << endl;
    cout <<  3 << setw(8) << setfill(' ') << pow(3, 2) << setw(8) << setfill(' ') << pow(3, 3) << endl;
    cout <<  4 << setw(8) << setfill(' ') << pow(4, 2) << setw(8) << setfill(' ') << pow(4, 3) << endl;
    cout <<  5 << setw(8) << setfill(' ') << pow(5, 2) << setw(8) << setfill(' ') << pow(5, 3) << endl;
    cout <<  6 << setw(8) << setfill(' ') << pow(6, 2) << setw(8) << setfill(' ') << pow(6, 3) << endl;
    cout <<  7 << setw(8) << setfill(' ') << pow(7, 2) << setw(8) << setfill(' ') << pow(7, 3) << endl;
    cout <<  8 << setw(8) << setfill(' ') << pow(8, 2) << setw(8) << setfill(' ') << pow(8, 3) << endl;
    cout <<  9 << setw(8) << setfill(' ') << pow(9, 2) << setw(8) << setfill(' ') << pow(9, 3) << endl;
    cout <<  10 << setw(8) << setfill(' ') << pow(10, 2) << setw(8) << setfill(' ') << pow(10, 3) << endl;
    
    return 0;
}
