//
//  main.cpp
//  4.38 world population growth
//
//  Created by ben haywood on 7/8/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

#ifndef E_NUM
#define E_NUM (2.71828)
#endif

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    const double RATE = .063;
    long long int population;
    const long long int INIT_POPULATION = 41000000;
    long long int populationIncrease = 0.0;
    
    
    cout << "Years" << setw(20) << "Population" << setw(20) << "Pop Increase" << endl;
    for (int time = 0; time < 75; time++)
    {
        population = INIT_POPULATION * pow( E_NUM, RATE * double(time));
        
        populationIncrease = population + populationIncrease;
        
        cout << time + 1 << setw(20) << population << setw(20) << populationIncrease << endl;
        
    }
    return 0;
}


// for californias population needs to be fixed
