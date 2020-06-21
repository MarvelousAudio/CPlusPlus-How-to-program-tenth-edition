//
//  main.cpp
//  Creating and manipulating an Account object
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <string>
#include "Account.hpp"


using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Account myAccount; // create Account object myAccount
    
    // show that initial value of myAccount's name is the empty string
    cout << "Initial account name is: " << myAccount.getName();
    
    //prompt for and read name
    cout << "\nPlease enter the account name: ";
    string theName;
    getline(cin, theName); //read a line of text
    myAccount.setName(theName); // put theName in myAccount
    
    //display the name stored in object myAccount
    cout << "Name in object myAccount is: " << myAccount.getName() << endl;
    return 0;
}
