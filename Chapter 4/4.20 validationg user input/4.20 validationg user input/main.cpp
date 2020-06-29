//
//  main.cpp
//  4.20 validationg user input
//
//  Created by ben haywood on 6/28/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int input = 0;
    
    while (true)
    {
        cout << "Enter a 1 or a 2 and then press ENTER:\n";
        cin >> input;
        
        if (input == 1 || input == 2)
        {
            cout << "program ended. good bye!\n";
            break;
        }
    }
    
    return 0;
}
