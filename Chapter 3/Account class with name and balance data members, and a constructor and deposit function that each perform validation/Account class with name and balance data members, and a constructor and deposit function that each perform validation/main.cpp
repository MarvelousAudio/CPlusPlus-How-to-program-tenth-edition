//
//  main.cpp
//  Account class with name and balance data members, and a constructor and deposit function that each perform validation
//
//  Created by ben haywood on 6/21/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Account.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    
    //display initial balance of each object
    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();
    
    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; //obatin user input
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance
    
    
    //display balances
    cout << "\n\naccount1: " << account1.getName() << " balanace is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();
    
    cout << "\n\nEnter deposit amount for account2: "; //prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount); // add to account2 balance
    
    //display balances
    cout << " \n\naccount1: " << account1.getName() << " balanace is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balanace is $" << account2.getBalance() << endl;
    
    return 0;
}
