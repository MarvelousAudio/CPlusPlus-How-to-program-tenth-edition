//
//  main.cpp
//  2.27 Integer Equivalent of a character
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
   
    char input;
    
    cout << "Enter a character and then press ENTER:" << endl;
    cin >> input;
    
    cout << static_cast<int>(input) << " is " << input << endl;
    return 0;
}
