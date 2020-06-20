//
//  main.cpp
//  2.20 Diameter, Circumference and Area of a circle
//
//  Created by ben haywood on 6/19/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    const int PI = 3.14159;
    int radius;
    
    cout << "Input a radius and then press ENTER" << endl;
    cin >> radius;
    
    cout << "Diameter: " << radius * 2 << endl;
    
    cout << "Cirumference: " << 2 * PI * radius << endl;
    
    cout << "Area: " << radius * radius * PI << endl;
    
    
    return 0;
}
