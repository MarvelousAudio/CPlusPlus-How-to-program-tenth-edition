//
//  Employee.h
//  3.11 Employee Class
//
//  Created by ben haywood on 6/22/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Employee_h
#define Employee_h

#include <string>

class Employee
{
public:
    Employee(std::string fName, std::string lName, int mIncome): firstName{fName}, lastName{lName}
    {
        if (mIncome < 0)
            monthlySalary = 0;
        else
            monthlySalary = mIncome;
            
    }
    //==============================================================================
    
    
    void setFirstName(std::string set)
    {
        firstName = set;
    }
    
    std::string getFirstName() const
    {
        return firstName;
    }
    
    //===============================================================================
    
    void setLastName(std::string set)
    {
        lastName = set;
    }
    
    std::string getLastName() const
    {
        return lastName;
    }
    //===============================================================================
    
    void setMonthlySalary(int set)
    {
        if (set < 0)
            monthlySalary = 0;
        else
            monthlySalary = set;
    }
    
    
    int getMonthlySalary() const
    {
        return monthlySalary;
    }
    
    void raise()
    {
        monthlySalary = (monthlySalary * .10) + monthlySalary;
    }
    //===============================================================================
    
private:
    std::string firstName;
    std::string lastName;
    int monthlySalary;
};
#endif /* Employee_h */
