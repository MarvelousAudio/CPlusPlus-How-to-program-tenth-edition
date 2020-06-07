//
//  main.cpp
//  Using memmove
//
//  Created by ben haywood on 6/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring> // memove prototype

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
   
    char x[]{"Home Sweet Home"};
    
    cout << "The string in array x before memmove is: " << x;
    cout << "\nThe string in array x after memmove is: "
    << static_cast<char*>(memmove(x, &x[5], 10)) << endl;
    
    
    /*
     
     note array x is being copied starting at postion 5 with lenth 10 so "Sweet Home" then postioned in the beginning of array output "Sweet Home Home"
     */
    return 0;
}
