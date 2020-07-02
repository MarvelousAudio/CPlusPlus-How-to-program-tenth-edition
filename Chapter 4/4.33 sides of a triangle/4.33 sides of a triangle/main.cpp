//
//  main.cpp
//  4.33 sides of a triangle
//
//  Created by ben haywood on 7/1/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
   
    
    double side1 = 0.0;
    double side2 = 0.0;
    double side3 = 0.0;
    bool flag = false;
    
    cout << "Enter three numbers each one followed by a space and the press ENTER\n";
    cin >> side1 >> side2 >> side3;
    
    if (side1 + side2 > side3)
    {
        flag = true;
    }
    else
    {
        flag = false;
        
    }
    
    if (flag)
    {
        cout << "its a triangle!" << endl;
    }
    else
    {
        cout << "its not a triangle!" << endl;
        
    }
    return 0;
}
