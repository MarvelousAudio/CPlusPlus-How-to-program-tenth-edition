//
//  main.cpp
//  4.15 sales-commission calculator
//
//  Created by ben haywood on 6/26/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//
/*
 sudo code
 create constant weelklyPay set to $200.00
 create constant grossSalesThatWeek set to 0.9
 create variable sales set to 0
 create variable salary set to 0
 
 
 prompt user to eneter salses in dollars
 get user value for salses
 
 calculate salary
 
 output salary
 
 while sales is not -1 do
 
 prompt user to eneter salses in dollars
 get user value for salses
 
 calculate salary
 
 output salary
 
 end while
    
 
 */
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    const double WEEKLY_PAY = 200.00;
    const double GROSS_SALES_THAT_WEEK = 0.09;
    int sales = 0;
    double salary = 0;
    
    cout << "Enter sales in dollars (-1 to end):" << endl;
    cin >> sales;
    
    salary = (sales * GROSS_SALES_THAT_WEEK) + WEEKLY_PAY;
    cout << "Salary is: " << salary  << endl;
    
    while (true)
    {
        cout << "Enter sales in dollars (-1 to end):" << endl;
        cin >> sales;
        
        if (sales == -1)
        {
            break;
        }
        salary = (sales * GROSS_SALES_THAT_WEEK) + WEEKLY_PAY;
        cout << "Salary is: " << salary  << endl;
    }
    return 0;
}
