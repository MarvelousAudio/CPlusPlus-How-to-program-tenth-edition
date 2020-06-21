//
//  Account.hpp
//  Creating and manipulating an Account object
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <string>

class Account
{
public:
    //member function that set the account name in the object
    void setName(std::string accountName);
    
    
    //member function that retrieves the account name from the object
    std::string getName() const;
    
    
private:
    
    std::string name; // data member containing account holder's name
    
}; // end class Account


#endif /* Account_hpp */
