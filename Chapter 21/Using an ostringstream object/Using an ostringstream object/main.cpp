//
//  main.cpp
//  Using an ostringstream object
//
//  Created by ben haywood on 5/2/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    ostringstream outputString;
    
    string string1{"Output of several data types "};
    string string2{"to an ostringstream object:"};
    string string3{"\n        double: "};
    string string4{"\n           int: "};
    string string5{"\naddress of int: "};
    
    double double1{123.4567};
    int integer{22};
    
    // output strings, double and int to ostringstream outputString
    outputString << string1 << string2 << string3 << double1
    << string4 << integer << string5 << &integer;
    
    //call str to obtain strin contents of the ostringstream
    cout << "outputstring contains:\n" << outputString.str();
     
    outputString << "\nmore characters added";
    cout << "\n\nafter additional stream insertions,\n"
    << "outputString contains:\n" << outputString.str() << endl;
    
    return 0;
}
