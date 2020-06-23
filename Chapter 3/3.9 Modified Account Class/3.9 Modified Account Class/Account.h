//
//  Account.h
//  3.9 Modified Account Class
//
//  Created by ben haywood on 6/22/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Account_h
#define Account_h

#include <iostream>
#include <string>

class Account
{
public:
    Account(std::string name, int bal) : accountName{name}, balance{bal}
    {
        //empty
    }
    
    void setBalance(int bal)
    {
        if (bal > 0)
        {
            bal += balance;
        }
    }
    
    int getBalance() const
    {
        return balance;
    }
    
    void setAccountName(std::string name) 
    {
        accountName = name;
    }
    
    std::string getAccountName() const
    {
        return accountName;
    }
    
    
    void withdrawal(int num)
    {
        if (num > 0 && num < balance)
        {
            balance -= num;
        }
    }
    //======================================================
private:
    std::string accountName;
    int balance{0};
};
#endif /* Account_h */
