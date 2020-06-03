//
//  main.cpp
//  Using atof
//
//  Created by ben haywood on 6/2/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstdlib> // atof prototype

using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    
    double d{atof("99.0")}; // convert string to double
    
    cout << "The string \"99.0\" converted to double is " << d
    << "\nThe convered value divied by 2 is " << d / 2.0 << endl;
    
    
    return 0;
}
