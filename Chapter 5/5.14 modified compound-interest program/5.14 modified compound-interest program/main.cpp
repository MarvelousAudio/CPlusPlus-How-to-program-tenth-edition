//
//  main.cpp
//  5.14 modified compound-interest program
//
//  Created by ben haywood on 7/23/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << fixed << setprecision(2);
    
    double principal{1000.00}; // initial amount before interest
    unsigned int  rate{5}; // interest rate
    double year{1}; // time
    
    
    cout << "Initial principal: " << principal << endl;
    cout << "    Interest rate:     " << rate << endl;
    
    // display headers
    cout << "\nRate" << setw(20) << "Amount on deposit" << endl;
    
    // calculate amount on deposit for each of ten years
    for (rate; rate <= 10; rate++)
    {
        // calculate amount on deposit at the end of the specified year
        double amount = principal * pow(1.0 + (double)rate / 100.0, year);
        
        // display the year and the amount
        cout << setw(4) << rate << '%' << setw(20) << amount << endl;
    }
    
    
    return 0;
}
