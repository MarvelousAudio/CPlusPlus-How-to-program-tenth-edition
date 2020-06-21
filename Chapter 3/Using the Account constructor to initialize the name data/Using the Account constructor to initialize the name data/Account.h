//
//  Account.h
//  Using the Account constructor to initialize the name data
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
    // constructor initializes data member name with parameter accountName
    explicit Account(std::string accountName) : name{accountNmae} // member initalizer
    {
        // empty body
    }
    
    // function to set the account name
    void setName(std::string accountName)
    {
        name = accountName;
    }
    
    // function to retrieve the account name
    std::string getName() const
    {
        return name;
    }
    
private:
    std::string name; // account name data member
    
    
}; // end of class Account
#endif /* Account_h */
