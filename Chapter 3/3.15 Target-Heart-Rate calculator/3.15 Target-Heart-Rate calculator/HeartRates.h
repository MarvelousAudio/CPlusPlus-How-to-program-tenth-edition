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
    
    int calculateAge(int cYears)
    {
        return cYears - year;
    }
    
    int calculateMaxHeartRate(int age)
    {
        int max;
        
        if (1 <= age && age < 30)
        {
            max = 200;
        }
        else if (30 <= age && age < 35)
        {
            max = 190;
        }
        else if (35 <= age && age < 40)
        {
            max = 185;
        }
        else if (40 <= age && age < 45 )
        {
            max = 180;
        }
        else if (45 <= age && age < 50)
        {
            max = 175;
        }
        else if (50 <= age && age < 55 )
        {
            max = 170;
        }
        else if (55 <= age && age < 60)
        {
            max = 165;
        }
        else if (60 <= age && age < 65)
        {
            max = 155;
        }
        else if (65 <= age && age < 70)
        {
            max = 150;
        }
        else
        {
            max = 150;
        }
        
        return max;
    }
    
    int calculateTargetHeartRate(int age)
    {
        int max;
        
        if (1 <= age && age < 30)
        {
            max = 170;
        }
        else if (30 <= age && age < 35)
        {
            max = 162;
        }
        else if (35 <= age && age < 40)
        {
            max = 157;
        }
        else if (40 <= age && age < 45 )
        {
            max = 153;
        }
        else if (45 <= age && age < 50)
        {
            max = 149;
        }
        else if (50 <= age && age < 55 )
        {
            max = 145;
        }
        else if (55 <= age && age < 60)
        {
            max = 140;
        }
        else if (60 <= age && age < 65)
        {
            max = 136;
        }
        else if (65 <= age && age < 70)
        {
            max = 132;
        }
        else
        {
            max = 128;
        }
        
        return max;
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
