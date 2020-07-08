//
//  main.cpp
//  do...while iteration statement
//
//  Created by ben haywood on 7/7/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    unsigned int counter{1};
    
    do
    {
        cout << counter << " ";
        ++counter;
        
    } while (counter <= 10); // end do ... while
    
    cout << endl;
    
    return 0;
}
