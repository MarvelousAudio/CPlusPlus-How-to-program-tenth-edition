//
//  Account.h
//  3.13 Removing duplicated code in the main function
//
//  Created by ben haywood on 6/22/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Account_h
#define Account_h

#include <string>

class Account
{
public:
    Account(std::string accountName, int initialBalance) : name{accountName}
    {
        if (initialBalance > 0)
        {
            balance += initialBalance;
        }
    }
    //========================================================================
    
    // function that deposit (adds) only a valid amount to the balance
    void deposit(int depositAmount)
    {
        if (depositAmount > 0) //if the depositAmount is valid
        {
            balance += depositAmount; // add it to the balance
        }
    }
    
    //========================================================================
    
    // function returns the account balance
    int getBalance() const
    {
        return balance;
    }
    //=====================================================================
    
    //function that sets the name
    void setName(std::string accountName)
    {
        name = accountName;
    }
    
    //===========================================================================
    
    //function that returns the name
    std::string getName() const
    {
        return name;
    }
    
private:
    std::string name; //account name data memeber
    int balance{0}; // data member with default initial value
};

#endif /* Account_h */
