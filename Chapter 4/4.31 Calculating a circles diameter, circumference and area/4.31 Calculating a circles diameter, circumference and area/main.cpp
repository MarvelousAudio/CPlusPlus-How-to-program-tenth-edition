//
//  main.cpp
//  4.31 Calculating a circles diameter, circumference and area
//
//  Created by ben haywood on 7/1/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

#ifndef PI
#define PI (3.14259)
#endif

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    double radius = 0.0;
    
    
    cout << "Enter a radius of a circle and then press ENTER:\n";
    cin >> radius;
    
    cout << "Diameter: " << radius * 2 << endl;
    cout << "Circumference: " << radius * 2 * PI << endl;
    cout << "Area: " << radius * radius * PI << endl;
    
    return 0;
}
