//
//  HeartRates.h
//  3.15 Target-Heart-Rate calculator
//
//  Created by ben haywood on 6/23/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef HeartRates_h
#define HeartRates_h

#include <string>
#include <time.h>

using std::string;

class HeartRates
{
public:
    HeartRates(string fName, string lName, int m, int d, int y) : firstName{fName}, lastName{lName}, day{d}, year{y}
    {
        
        if (1 <= m && m <= 12)
        {
            month = m;
        }
        else
        {
            month = 1;
        }
    }
    
    //=============================================================================
    void setFirstName(string set)
    {
        firstName = set;
    }
    
    string getFirstName() const
    {
        return firstName;
    }
    
    //============================================================================
    
    void setLastName(string set)
    {
        lastName = set;
    }
    
    string getLastName() const
    {
        return lastName;
    }
    
    //=============================================================================
    
    void setMonth(int set)
    {
        if ( 1 <= set && set <= 12 )
        {
            month = set;
        }
        else
        {
            month = 1;
            
        }
    }
    
    int getMonth() const
    {
        return month;
        
    }
    //============================================================================
    
    void setDay(int set)
    {
        day = set;
    }
    
    int getDay() const
    {
        return day;
    }
    //=============================================================================
    
    void setYear(int set)
    {
        year = set;
        
        
    }
    
    int getYear() const
    {
        return year;
    }
    //=============================================================================
private:
    string firstName;
    string lastName;
    int month;
    int day;
    int year;
    
    
};
#endif /* HeartRates_h */
