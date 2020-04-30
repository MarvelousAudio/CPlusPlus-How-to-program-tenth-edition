//
//  main.cpp
//  Demonstrating the string find member functions.
//
//  Created by ben haywood on 4/30/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    string string1{"noon is 12 pm; midnight is not."};
    int location;
    
    //find "is" at laction 5 and 24
    cout << "Original string:\n:" << string1
    << "\n\n(find) \" is \" was found at: " << string1.find("is")
    << "\n(rfind) \"is\" was found at: " << string1.rfind("is");
    
    
    //find 'o' at location 1
    location = string1.find_first_of("misop");
    cout << "\n\n(find_first_of) found '" << string1[location]
    << "' from the group \"misop\" at: " << location;
    
    
    //find 'o' at loction 28
    location = string1.find_last_of("misop");
    cout << "\n\n(find_last_of) found '" << string1[location]
    << "' from the group \"misop\" at: " << location;
    
    // find '1' at location 8
    location = string1.find_first_not_of("noi spm");
    cout << "\n\n(find_first_not_of) '" << string1[location]
    << "' is not conatined in \"noi spm\" and was found at: " << location;
    
    // find '.' at location 13
    location = string1.find_first_not_of("12noi spm");
    cout << "\n\n(find_first_not_of) '" << string1[location]
    << "' is not conatined in \"12noi spm\" and was " << "found at: " << location << endl;
    
    location = string1.find_first_not_of("noon is 12 pm; midnight is not.");
    cout << "\nfind_first_not_of(\"noon is 12pm; midnight is not.\" )" << " returned: " << location << endl;
    
    return 0;
}
