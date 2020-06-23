//
//  main.cpp
//  3.9 Modified Account Class
//
//  Created by ben haywood on 6/22/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Account.h"

using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    Account account1{"Ben Haywood", 10000};
    
    
    cout << account1.getAccountName() << " balance is " << account1.getBalance() << endl;
    
    account1.withdrawal(500);
    account1.withdrawal(-20);
    
    cout << "you have withdrawn from the account new balance is " << account1.getBalance() << endl;
    return 0;
}
