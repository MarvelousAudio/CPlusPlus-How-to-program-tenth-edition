//
//  main.cpp
//  4.19 find the two largest numbers
//
//  Created by ben haywood on 6/27/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //int largest = 0;
    int input1 = 0;
    int input2 = 0;
    int count = 0;
    
    while ( count < 10)
    {
        cout << "Enter the two numbers and press enter: count = " << count << endl;
        cin >> input1 >> input2;
        
        if (input1 > input2)
        {
            cout << "largest is: " << input1 << endl;
        }
        else
        {
            cout << "largest is: " << input2 << endl;
        }
        
        count++;
    }
    return 0;
}
