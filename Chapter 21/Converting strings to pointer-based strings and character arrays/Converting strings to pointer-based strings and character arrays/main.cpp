//
//  main.cpp
//  Converting strings to pointer-based strings and character arrays
//
//  Created by ben haywood on 5/2/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    string string1{"STRINGS"};  // stirng constructor with char* arg
    const char* ptr1{nullptr};  // initialize ptr1
    
    size_t length{string1.size()};
    char* ptr2{new char[length + 1]}; // including null
    
    //compy character from string1 into alloctated memory
    string1.copy(ptr2, length, 0); // copy string1 to ptr2 char*
    ptr2[length] = '\0'; // add null terminator
    
    cout << "string string is " << string1
    << "\nstring1 converted to a pointer-based string is "
    << string1.c_str() << "\nptr1 is ";
    
    // Assign to pointer ptr1 the const char* returned by
    // function data(). NOTE: this is  potentially dangerous
    // assignment. if string1 is modified, pointer ptr1 can
    // become invalid.
    
    ptr1 = string1.data(); // non-null terminated char array
    
    // output each character using pointer
    for (size_t i{0}; i < length; ++i)
    {
        cout << *(ptr1 + i); // use pointer arthimetic
    }
    
    cout << "\nptr2 is " << ptr2 << endl;
    delete [] ptr2;
    
    return 0;
}
