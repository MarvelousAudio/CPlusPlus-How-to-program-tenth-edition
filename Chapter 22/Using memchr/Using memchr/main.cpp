//
//  main.cpp
//  Using memchr
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring> // memchr prototype

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    char s[]{"This is a string"};
    
    cout << "s = " << s << "\n" << endl;
    cout << "The remainder of s after character 'r' is found is \""
    << static_cast<char*>(memchr(s, 'r', 16)) << '\"' << endl;
    
    // finds the remainder of s where r starts so it returns ring.
    return 0;
}
