//
//  main.cpp
//  Printing string Characteristics
//
//  Created by ben haywood on 4/30/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void printStatistics(const string&);

int main(int argc, const char * argv[]) {
    // insert code here...
   
    
    string string1; //emtpy string
    
    cout << "Statistics before input:\n" << boolalpha;
    printStatistics(string1);
    
    
    //read in only "tomato" from "tomato soup"
    cout << "\n\nEnter a string: ";
    cin >> string1;
    cout << "The string entered was: " << string1;
    
    cout << "\nStatistics after input:\n";
    printStatistics(string1);
    
    
    // read in "soup"
    cin >> string1;
    cout << "\n\nThe remaining string is: " << string1 << endl;
    printStatistics(string1);
    
    //append 46 characters to string1
    string1 += "1234567890abcdefghijklmnopqrstuvwxyz1234567890";
    cout << "\n\nstring1 is now: " << string1 << endl;
    printStatistics(string1);
    
    //add 10 elements to string1
    string1.resize(string1.size() + 10);
    cout << "\n\nStats after resizing by (length + 10)\n";
    printStatistics(string1);
    cout << endl;
    
    
    return 0;
}


void printStatistics(const string& stringRef)
{
    cout << "capcity: " << stringRef.capacity() << "\nmax size: "
    << stringRef.max_size() << "\nsize: " << stringRef.size()
    << "\nlength: " << stringRef.size()
    << "\nempty: " << stringRef.empty();
}
