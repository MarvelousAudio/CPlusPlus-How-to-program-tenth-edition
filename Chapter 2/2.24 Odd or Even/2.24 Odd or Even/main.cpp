//
//  main.cpp
//  2.24 Odd or Even
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
   
    int input;
    
    cout << "enter a number and then press ENTER" << endl;
    cin >> input;
    
    cout << (input % 2 == 0 ? "Even": "Odd") << endl;
    return 0;
}
