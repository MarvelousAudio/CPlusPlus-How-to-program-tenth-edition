//
//  main.cpp
//  4.17 find the largest
//
//  Created by ben haywood on 6/27/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int counter = 0;
    int number = 0;
    int largest = 0;
    //int numbers[10] = {};
    
    while (counter < 10)
    {
        cout << "number on numbers enters is " << counter  << endl;
        cout <<  "Enter the number of sales (-1 to quit): " << endl;
        cin >> number; // get input
        
        if ( number == -1)
        {
            break;
        }
        //numbers[counter] = number;
        
        
        if (largest < number)
        {
            largest = number;
            cout << "largest sales: " << number << endl;
        }
        else
        {
            cout << largest << " is still the largest salses!" << endl;
        }
        
        counter++;
    }
    return 0;
}
