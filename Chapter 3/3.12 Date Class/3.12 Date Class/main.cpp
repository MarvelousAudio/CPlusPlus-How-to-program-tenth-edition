//
//  main.cpp
//  3.12 Date Class
//
//  Created by ben haywood on 6/22/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include "Date.h"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    Date date1{2,17,1987};
    
    date1.displayDate();
    date1.setYear(2014);
    date1.setMonth(15);
    date1.setDay(13);
    
    date1.displayDate();
    date1.setMonth(2);
    date1.displayDate();
    
    return 0;
}
