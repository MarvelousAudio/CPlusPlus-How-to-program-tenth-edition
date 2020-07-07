//
//  main.cpp
//  Counter-controlled iteration with the for iteration statement
//
//  Created by ben haywood on 7/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>


using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
   
    //for statement header includes intitalization,
    //loop-continuation condition and increament
    for (unsigned int counter{1}; counter <= 10; ++counter)
    {
        cout << counter << " ";
    }
    
    cout << endl;
    
    return 0;
}
