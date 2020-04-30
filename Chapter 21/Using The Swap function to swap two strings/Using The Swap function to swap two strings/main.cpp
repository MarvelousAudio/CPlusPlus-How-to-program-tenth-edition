//
//  main.cpp
//  Using The Swap function to swap two strings
//
//  Created by ben haywood on 4/30/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    string first{"one"};
    string second{"two"};
    
    //output strings
    cout << "Before swap:\n first: " << first << "\nsecond: " << second;
    
    
    first.swap(second); //swap strings
    
    cout << "\n\nAfter swap:\n first: " << first << "\nsecond: " << second << endl;
    return 0;
}
