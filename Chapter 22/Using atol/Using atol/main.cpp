//
//  main.cpp
//  Using atol
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    long x{atol("1000000")};
    
    cout << "The string \"1000000\" converted to long is " << x
    << "\nThe converted value divied by 2 is " << x / 2 << endl;
    
    return 0;
}
