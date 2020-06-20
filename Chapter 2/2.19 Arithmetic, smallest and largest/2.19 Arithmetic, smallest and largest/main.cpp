//
//  main.cpp
//  2.19 Arithmetic, smallest and largest
//
//  Created by ben haywood on 6/19/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int input1, input2, input3, sum, average, product, highest, lowest;
    
    cout << "enter input 1 and then press ENTER" << endl;
    cin >> input1;
    
    
    cout << "enter input 2 and then press ENTER" << endl;
    cin >> input2;
    
    cout << "enter input 3 and then press ENTER" << endl;
    cin >> input3;
    
    sum = input1 + input2 + input3;
    
    cout << "Sum is " << sum << endl;
    //======================================================
    
    average = sum / 3;
    
    cout << "Average is " << average << endl;
    
    //======================================================
    
    product = input1 * input2 * input3;
    
    cout << "Product is " << product << endl;
    
    //=======================================================
    
   
    highest = input1;
    lowest = input2;
    
    if (highest < lowest || highest < input3)
    {
        lowest = highest;
        highest = input2;
        
        if (highest < input3)
        {
            
            highest = input3;
            
        }
        
        //lowest = highest;
    }
    
    cout << "Smallest is " << lowest << endl;
    cout << "Largest is " << highest << endl;
    return 0;
}
