//
//  Student.h
//  Student class that stores a student name and average
//
//  Created by ben haywood on 6/23/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#ifndef Student_h
#define Student_h

#include <string>


class Student
{
public:
    //constructor intiializes data memebers
    Student(std::string studentName, int studentAverage) : name(studentName)
    {
        
        // sets average data member if studentAverage is valid
        setAverage(studentAverage);
        
    }
    
    // sets the students name
    void setName(std::string studentName)
    {
        name = studentName;
    }
    
    // retrieves the students name
    std::string getName() const
    {
        return name;
    }
    
    //set the student's average
    void setAverage(int studentAverage)
    {
        //validate that studentAverage is > 0 and <= 100; otherwise,
        // keep data member averages current value
        if (studentAverage > 0)
        {
            if (studentAverage <= 100)
            {
                average = studentAverage; // assign to data memeber
            }
        }
    }
    
    // retrives the students average
    int getAverage() const
    {
        return average;
    }
};

#endif /* Student_h */
