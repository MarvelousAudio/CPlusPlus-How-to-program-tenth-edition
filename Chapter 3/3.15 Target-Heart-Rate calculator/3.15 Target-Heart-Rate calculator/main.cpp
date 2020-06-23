//
//  main.cpp
//  3.15 Target-Heart-Rate calculator
//
//  Created by ben haywood on 6/23/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "HeartRates.h"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    HeartRates heartRate1{"Ben", "Haywood", 2, 17, 1987};
    int currentYear;
    
    cout << "Enter the current year and then press ENTER" << endl;
    cin >> currentYear; //obtain user input
    
    //heartRate1.calculateAge(currentYear);
    
    cout << "max heart rate for age " << heartRate1.calculateAge(currentYear) << " is ";
    cout << heartRate1.calculateMaxHeartRate(heartRate1.calculateAge(currentYear)) << endl;
    
    
    cout << "target heart rate for age " << heartRate1.calculateAge(currentYear) << " is "
    << heartRate1.calculateTargetHeartRate(heartRate1.calculateAge(currentYear)) << endl;
    
    
    return 0;
}
