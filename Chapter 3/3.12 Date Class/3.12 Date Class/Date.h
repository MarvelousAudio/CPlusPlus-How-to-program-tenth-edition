//
//  Date.h
//  3.12 Date Class
//
//  Created by ben haywood on 6/22/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Date_h
#define Date_h

#include <iostream>

using std::cout;
using std::endl;


class Date
{
public:
    Date(int m, int d, int y) : day{d}, year{y}
    {
        
        if ( 1 < m && m < 12)
        {
            month = m;
        }
        else
        {
            month = 1;
        }
    }
    //======================================================================
    
    void setMonth(int set)
    {
        if ( 1 < set && set < 12)
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
    //======================================================================
    
    void setDay(int set)
    {
        day = set;
    }
    
    int getDay() const
    {
        return day;
    }
    //=====================================================================
    
    void setYear(int set)
    {
        year = set;
    }
    
    int getYear() const
    {
        return year;
    }
    
    //====================================================================
    
    void displayDate()
    {
        cout << month << "/" << day << "/" << year << endl;
    }
    
private:
    
    int month;
    int day;
    int year;
};

#endif /* Date_h */
