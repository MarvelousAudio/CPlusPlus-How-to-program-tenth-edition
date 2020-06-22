//
//  main.cpp
//  Using the Account constructor to initialize the name data
//
//  Created by ben haywood on 6/21/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Account.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //create two account objects
    Account account1{"Jane Green"};
    Account account2{"John Blue"};
    
    //display initial value of name for each
    cout << "account1 name is: " << account1.getName() << endl;
    cout << "account2 name is: " << account2.getName() << endl;
    
    return 0;
}
