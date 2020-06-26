//
//  main.cpp
//  4.13 gas mileage
//
//  Created by ben haywood on 6/25/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//
/*
 sudo code
 create variable totalMPG and initalize it to 0
 create variable totalMiles and initialize it to 0
 create variable totalGallons and initialzie it to 0
 create variable milesDriven and initialize it to 0
 create variable gallonsUsed and initialize it to 0
 create variable mpg and initialize it to 0
 
 do
    prompt user
    allow user to enter miles driven
    prompt user
    allow user to enter gallons used
    calculate mpg
    calculate totalMPG
    output total mpg
     
 while milesDriven is not -1
  
 end program
 */


#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    double totalMPG = 0;
    double milesDriven = 0;
    double totalMiles = 0;
    double totalGallons = 0;
    double gallonsUsed = 0;
    double mpg = 0;
    bool flag = true;
    
    
    do {
        cout << "Enter miles driven (-1 to quit): ";
        cin >> milesDriven;
        if (milesDriven == -1)
        {
            flag = false;
            break;
        }
        cout << "Enter gallons used: ";
        cin >> gallonsUsed;
        
        mpg = milesDriven / gallonsUsed;
        
        totalMiles += milesDriven;
        totalGallons += gallonsUsed;
        cout << setprecision(6) << fixed;
        cout << "MPG this trip: " << mpg << endl;
        totalMPG =  totalMiles / totalGallons;
        cout << "Total MPG: " << totalMPG << endl;
        
    } while (flag);
    
    return 0;
}
