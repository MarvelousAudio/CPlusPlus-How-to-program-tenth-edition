//
//  main.cpp
//  3.11 Employee Class
//
//  Created by ben haywood on 6/22/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Employee.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Employee employee1{"Ben", "Haywood", 100000};
    
    cout << "Employee first name: " << employee1.getFirstName() << endl;
    cout << "Employee last name: " << employee1.getLastName() << endl;
    cout << "Employee monthly salary: " << employee1.getMonthlySalary() << endl;
    
    employee1.raise();
    
    cout << "Employee montly salary with raise: " << employee1.getMonthlySalary() << endl;
    
    
    employee1.setMonthlySalary(-50);
    cout << "Changes monthly salary to: " << employee1.getMonthlySalary() << endl;
    return 0;
}
