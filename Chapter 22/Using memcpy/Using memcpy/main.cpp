//
//  main.cpp
//  Using memcpy
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring> //memcpy prototype

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[17]{}; // 17 total characters (includes terminating null)
    
    char s2[]{"Copy this string"};
    
    memcpy(s1,s2, 17); // copy 17 characters from s2 to s1
    
    cout << "After s2 is copied into s1 with memcpy,\n"
    << "s1 contains \"" << s1 <<  '\"' << endl;
    
    return 0;
}
