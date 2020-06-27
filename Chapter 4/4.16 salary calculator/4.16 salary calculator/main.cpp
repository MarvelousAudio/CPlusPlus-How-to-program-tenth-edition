//
//  main.cpp
//  4.16 salary calculator
//
//  Created by ben haywood on 6/26/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//
/*
 sudo code
 
 create variable hoursWorked set to 0
 create variable hourlyRate set to 0
 create variable salary set to 0
 
 
 prompt user to enter hours worked
 get hoursWorked as input
 
 prompt user to enter hourly rate
 get hourlyRate as input
 
 calculate salary and check for overtime pay
 
 while true do
    prompt user to enter hours worked
    get hoursWorked as input
    
    validate hoursWorked if its same as -1 break while loop
 
    prompt user to enter hourly rate
    get hourlyRate as input

    calculate salary

 end while
 */



#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int hoursWorked = 0;
    double hourlyRate = 0.0;
    double salary = 0.0;
    
    cout << "Enter hours worked (-1 to end): " << endl;
    cin >> hoursWorked;
    
    cout << "Enter hourly rate of the employee ($00.00): " << endl;
    cin >> hourlyRate;
    
    
    if (hoursWorked > 40)
    {
        
        salary = (hoursWorked - 40) * (hourlyRate + (hourlyRate/2)) + (40 * hourlyRate);
    }
    else
    {
        salary = hourlyRate * hoursWorked;
    }
    
    cout << setprecision(2) << fixed;
    cout << "Salary is " << salary << endl;
    cout << endl;
    cout << endl;
    while (true)
    {
        cout << "Enter hours worked (-1 to end): " << endl;
        cin >> hoursWorked;
        
        if (hoursWorked == -1)
        {
            break;
        }
        cout << "Enter hourly rate of the employee ($00.00): " << endl;
        cin >> hourlyRate;
        
        //salary = hourlyRate * hoursWorked;
        
        if (hoursWorked > 40)
        {
            
            salary = (hoursWorked - 40) * (hourlyRate + (hourlyRate/2)) + (40 * hourlyRate);
        }
        else
        {
            salary = hourlyRate * hoursWorked;
        }
        cout << setprecision(2) << fixed;
        cout << "Salary is $" << salary << endl;
        cout << endl;
        cout << endl;
    }
    return 0;
}
