//
//  main.cpp
//  Solving the class-average problem using counter-controlled iteration
//
//  Created by ben haywood on 6/23/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
   
    
    int total{0}; // initialize sum of grades entered by the user
    unsigned int gradeCounter{1}; // initialze grade # to be entered next
    
    
    // processing phase uses counter-controlled iteration
    while (gradeCounter <= 10) // loops 10 times
    {
        cout <<  "Enter grade: "; //prompt
        int grade;
        cin >> grade; // input next grade
        total += grade; // add grade to total
        gradeCounter += 1; //increment conter by 1
        
    }
    
    // termination phase
    int average{total / 10}; // int division yields int results
    
    //display total and average of grades
    cout << "\nTotal of all 10 grades is " << total;
    cout << "\nClass average is " << average << endl;
    
    return 0;
}
