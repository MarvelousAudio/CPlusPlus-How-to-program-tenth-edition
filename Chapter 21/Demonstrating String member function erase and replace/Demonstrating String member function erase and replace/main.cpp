//
//  main.cpp
//  Demonstrating String member function erase and replace
//
//  Created by ben haywood on 5/1/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    //compiler concatenates all parts into one string
    string string1{"Then values in any left subtree"
        "\nare less than the value in the"
        "\nparent node and the values in"
        "\nany right subtree are greater"
        "\nthan the value in the parent node"};
    
    cout << "Original string:\n" << string1 << endl << endl;
    
    // remove all characters from (and including) location 62
    // through the end of string1
    string1.erase(62);
    
    // output new string
    cout << "Original string after erase:\n" << string1
    << "\nAfter frist replacement:\n";
    
    size_t position = string1.find(" "); //find first space
    
    
    // replace all spaces with period
    while (position != string::npos)
    {
        string1.replace(position, 1, ".");
        position = string1.find(" ", position + 1);
    }
    
    cout << string1 << "\nAfter second replacement:\n";
    
    position = string1.find("."); // find first period
    
    // replace all periods with two semicolons
    // NOTE: this will overwirte characters
    while (position != string::npos)
    {
        string1.replace(position, 2, "xxxxx;;yyy", 5, 2);
        position = string1.find(".", position + 1);
    }
    
    cout << string1 << endl;
    return 0;
}
