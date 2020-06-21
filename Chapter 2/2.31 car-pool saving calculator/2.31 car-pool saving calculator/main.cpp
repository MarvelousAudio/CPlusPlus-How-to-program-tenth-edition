//
//  main.cpp
//  2.31 car-pool saving calculator
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    const int DAY_IN_A_SEMESTER = 80; //if full time and going 5 days out of the week
    const int BUS_FARE = 34;
    int milesPerDay, costOfGas, milesPerGallon, parkingFee, tollsPerDay;
    int costToDrive;
    int savings;
    cout << "Enter the number of miles driven pre day and the press ENTER\n";
    cin >> milesPerDay;
    cout << "Enter the cost of gas\n";
    cin >> costOfGas;
    cout << "Enter miles per gallon\n";
    cin >> milesPerGallon;
    cout << "Enter Parking fees\n";
    cin >> parkingFee;
    cout << "Enter Tolls per day\n";
    cin >> tollsPerDay;
    
    cout << "cost for taking the bus to Cosumnes River College for full time student  is $34.00\n";
    
    costToDrive = DAY_IN_A_SEMESTER * milesPerDay * costOfGas + parkingFee + tollsPerDay;
    
    savings = costToDrive - BUS_FARE;
    
    cout << "You will save " << savings << " if you take the bus for the semester!" << endl;
    return 0;
}
