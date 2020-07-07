//
//  Account.h
//  4.36 modified account class
//
//  Created by ben haywood on 7/6/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Account_h
#define Account_h
#include <string>

class Account
{
public:
    //Account constructor with two parameters
    Account(std::string accountName, double initialBalance) : name{accountName}
    {
        // validate that the initialBalance is greater than 0; if not,
        // data memeber balance keeps its default initial value of 0
        if (initialBalance > 0)
        {
            balance = initialBalance; //assign it to data member balance
        }
    }
    
    //========================================================================
    
    //function that deposit (adds) only a valid amount to the balance
    void deposit(double depositAmount)
    {
        if (depositAmount > 0)
        {
            balance += depositAmount; // add it to the balance
        }
    }
    
    //========================================================================
    
    // function that return the account balance
    double getBalance() const
    {
        return balance;
    }
    
    //========================================================================
     // function that sets the name
    void setName(std::string accountName)
    {
        name = accountName;
    }
    //=========================================================================
    
    //function that returns the name
    std::string getName() const
    {
        return name;
    }
    
   //==========================================================================
private:
    
    std::string name; //account name data memeber
    double balance{0.0}; // data member with default initial value
    
    
};// end class Account

#endif /* Account_h */
