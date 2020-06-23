//
//  main.cpp
//  3.13 Removing duplicated code in the main function
//
//  Created by ben haywood on 6/22/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Account.h"

using namespace std;


void displayAccount(Account accountToDisplay);

int main(int argc, const char * argv[]) {
    // insert code here...
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    
    //display initial balance of each object
    cout << "account1: ";
    displayAccount(account1);
    cout << "account2: ";
    displayAccount(account2);
    
    cout << "\n\nEnter deposit amount for account1 "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance
    
    //display balance
    cout << "account1: ";
    displayAccount(account1);
    cout << "account2: ";
    displayAccount(account2);
    
    cout << "\n\nEnter deposit amount for account2:"; //prompt
    cin >> depositAmount; // obtain user input
    account2.deposit(depositAmount);
    
    // display balance
    
    cout << "account1: ";
    displayAccount(account1);
    cout << "account2: ";
    displayAccount(account2);
    
    return 0;
}

void displayAccount(Account accountToDisplay)
{
    
    cout << accountToDisplay.getName() << " balance is $"
    << accountToDisplay.getBalance() << endl;
    
}
