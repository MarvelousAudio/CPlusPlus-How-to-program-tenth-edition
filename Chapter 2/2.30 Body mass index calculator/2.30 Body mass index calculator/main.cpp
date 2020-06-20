//
//  main.cpp
//  2.30 Body mass index calculator
//
//  Created by ben haywood on 6/20/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int weightInPounds, heightInInches, bmi;
    
    cout << "Enter your height in inches and then press enter\n";
    cin >> heightInInches;
    
    cout << "Enter your weight in pounds and then press enter\n";
    cin >> weightInPounds;
    
    
    bmi = (weightInPounds * 703)/(heightInInches * heightInInches);
    
    cout << "BMI: " << bmi << '\n';
    cout << "BMI VALUES\n";
    cout << "Underweight:" << setw(12) << setfill(' ') << "Less than 18.5\n";
    cout << "Normal:" << setw(12) << setfill(' ') << "between 18.5 and 24.9\n";
    cout << "Overweight:" << setw(12) << setfill( ' ')<< "between 25 and 29.9\n";
    cout << "Obese:" << setw(12) << setfill(' ') << "30 or greater\n";
    
    return 0;
}
