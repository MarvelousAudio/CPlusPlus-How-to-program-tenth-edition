//
//  main.cpp
//  Student class that stores a student name and average
//
//  Created by ben haywood on 6/23/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Student.h"


using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    Student account1{"Jane Green", 93};
    Student account2{"John Blue", 72};
    
    cout << account1.getName() << "'s letter grade equivalent of " << account1.getAverage() << " is: " << account1.getLetterGrade() << "\n";
    
    cout << account2.getName() << "'s letter grade equivalent of " << account2.getAverage() << " is: " << account2.getLetterGrade() << endl;
    
    
    return 0;
}
