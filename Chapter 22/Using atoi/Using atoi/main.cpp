//
//  main.cpp
//  Using atoi
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i{atoi("2593")};
    
    cout << "The string \"2593\" converted to int is " << i
    << "\nThe converted value minus 593 is " << i - 593 << endl;
    return 0;
}
