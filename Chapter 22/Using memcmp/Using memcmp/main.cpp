//
//  main.cpp
//  Using memcmp
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstring> // memcmp prototype

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    char s1[]{"ABCDEFG"};
    char s2[]{"ABCDXYZ"};
    
    
    cout << "s1 = " <<  s1 << "\ns2 = " << s2 << endl;
    cout << "\nmemcmp(s1, s2, 4) = " << setw(3) << memcmp(s1, s2, 4)
    << "\nmemcmp(s1, s2, 7) = " << setw(3) << memcmp(s1, s2, 7)
    << "\nmemcmp(s2, s1, 7) = " << setw(3) << memcmp(s2, s1, 7)
    << endl;
    
    /*
     memcmp(s1, s2 7) and memcmp(s2, s1, 7) are -19 and 19 respectively because of the compiler. would get a different value depending on different compilers.
     */
    
    return 0;
}
