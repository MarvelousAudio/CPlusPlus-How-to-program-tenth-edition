//
//  Account.cpp
//  Creating and manipulating an Account object
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include "Account.hpp"

void Account::setName(std::string accountName)
{
    name = accountName;
}

std::string Account::getName() const
{
    return name; // return name's value to this function's caller
}
