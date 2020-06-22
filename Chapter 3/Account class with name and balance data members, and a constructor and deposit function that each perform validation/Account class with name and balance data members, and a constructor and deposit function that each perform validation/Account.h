//
//  Account.h
//  Account class with name and balance data members, and a constructor and deposit function that each perform validation
//
//  Created by ben haywood on 6/21/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Account_h
#define Account_h

#include <string>

class Account
{
public:
    //Acount constructor with two parameters
    Account(std::string accountName, int initialBalance) : name{accountName}
    {
        // validate that the initialBalance is greater than 0; if not,
        // data member balance keeps its default initial value of 0
        
        if ( initialBalance > 0) // if the initialBalance is valid
        {
            balanace = initialBalance; // assign it to data member balance
        }
    }
    
    // function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount)
    {
        if (depositAmount > 0)// if the depositAmount is valid
        {
            balanace += depositAmount; // add it to the balance
        }
    }
    
    // function returns the account balance
    int getBalance() const
    {
        return balanace;
    }
    
    // function that sets the name
    void setName(std::string accountName)
    {
        name = accountName;
    }
    
    // function that returns the name
    std::string getName() const
    {
        return name;
    }
    
    
    //=======================================================================
private:
    std::string name; // account name data memeber
    int balanace{0}; // data member with default initial value
    
};// end class Account

#endif /* Account_h */
