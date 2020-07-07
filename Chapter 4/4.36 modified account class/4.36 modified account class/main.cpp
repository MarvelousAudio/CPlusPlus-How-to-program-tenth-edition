//
//  main.cpp
//  4.36 modified account class
//
//  Created by ben haywood on 7/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Account.h"
#include <iomanip>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    Account account1{"ben", 5.50};
    
    
    cout << setprecision(2) << fixed;
    cout << account1.getBalance() << endl;
    
    
    return 0;
}
