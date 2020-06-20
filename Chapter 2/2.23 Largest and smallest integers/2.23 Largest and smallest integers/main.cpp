//
//  main.cpp
//  2.23 Largest and smallest integers
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int input1, input2, input3, input4, input5;
    int highest, lowest;
    
    cout << "Enter five numbers and then press enter\n";
    cin >> input1 >> input2 >> input3 >> input4 >> input5;
    
    highest = input1;
    lowest = input2;
    
    if (highest < input3 || highest < input4 || highest < input5 || highest < lowest)
    {
        
        highest = input2;
        
        if (highest < input3 || highest < input4 || highest < input5)
        {
            highest = input3;
            
            if (highest < input4 || highest < input5)
            {
                highest = input4;
                
                if (highest < input5)
                {
                    highest = input5;
                }
            }
        }
        
    }
    
    if (lowest > highest || lowest > input3 || lowest > input4 || lowest > input5)
    {
        
        lowest = input1;

        if (lowest > input3 || lowest > input4 || lowest > input5)
               {
                   lowest = input3;
                   
                   if (lowest > input4 || lowest > input5)
                   {
                       lowest = input4;
                       
                       if (lowest > input5)
                       {
                           lowest = input5;
                       }
                   }
               }
    }
    cout << "Largest: " << highest << endl;
    cout << "Smallest: " << lowest << endl;
    
    return 0;
}
