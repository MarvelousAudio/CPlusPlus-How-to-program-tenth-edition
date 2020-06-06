//
//  main.cpp
//  Using strtod
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstdlib> // strtod prototype

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    const char* string1{"51.2% are admitted"};
    char* stringPtr{nullptr};
    
    double d{strtod(string1, &stringPtr)}; // convert to double
    
    cout << "The string \"" << string1 << "\" is converted to the \ndouble value "
    << d << " and the string \"" << stringPtr << "\"" << endl;
    return 0;
}
