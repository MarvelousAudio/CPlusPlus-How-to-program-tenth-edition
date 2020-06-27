//
//  main.cpp
//  4.14 credit limits
//
//  Created by ben haywood on 6/26/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//
/*
 sudo code
 create variable accountNumber and set it to 0
 create variable beginningBalance and set it to 0
 create variable totalCharges and set it to 0
 create variable totalCredit and set it to 0
 create variable creditLimit and set it to 0
 create variable newBalance and set it to 0
 create variable flag set it to true
 
 Do
     prompt user for account number
     
     get input for accountNumber
     validate accountNumber if it is the same as -1 break
 
     prompt user for total charges
     get input for totalCharges
 
     prompt user for beginning balance
     get input for beginnningBalance
     
     prompt user for total credits
     get input for totalCredit
     
     prompt user for credit limit
     get input for creditLimit
 
     calculate newBalance
 
 
 
     output new balance
     
     output account number
     output credit limit
     output balance
     calculate if limit was exceeded
     
 
 while flag is true
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int accountNumber{0};
    double beginningBalance{0};
    double totalCharges{0};
    double totalCredit{0};
    double creditLimit{0};
    double newBalance{0};
    bool flag = true;
    
    
    do{
        cout << "Enter account number (or -1 to quit): " << endl;
        cin >> accountNumber;
        
        if (accountNumber == -1)
        {
            flag = false;
            break;
        }
        cout << "Enter beginning balance: " << endl;
        cin >> beginningBalance;
        
        cout << "Enter total charges: " << endl;
        cin >> totalCharges;
        
        cout << "Enter total credits: " << endl;
        cin >> totalCredit;
        
        cout << "Enter credit limit: " << endl;
        cin >> creditLimit;
        
        newBalance = beginningBalance + totalCharges - totalCredit;
        
        cout << setprecision(2) << fixed;
        cout << "New balance is " << newBalance << endl;
        
        cout << left <<"Account:" << setw(12) << right << accountNumber << "\n";
        cout << left << "Credit limit:" << setw(11) << right << creditLimit << "\n";
        cout << left << "Balance:" << setw(16) << right << newBalance << "\n";
        cout << ((newBalance > creditLimit)? "Credit Limit Exceeded": "Credit Limit not Exceede");
        cout << endl;
        cout << endl;
        
    }while(flag);
    return 0;
}
