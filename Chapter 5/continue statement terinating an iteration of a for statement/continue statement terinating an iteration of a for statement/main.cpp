//
//  main.cpp
//  continue statement terinating an iteration of a for statement
//
//  Created by ben haywood on 7/8/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    for (unsigned int count{1}; count <= 10; count++)
    {
        if (count == 5)
        {
            continue; // skip remaing code in loop body if count is 5
        }
        
        cout << count << " ";
    }
    
    cout << "\nUsed continue to skip printing 5" << endl;
    
    return 0;
}
