//
//  main.cpp
//  Addition program that displays the sum of two integers
//
//  Created by ben haywood on 6/13/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int number1{0};
    int number2{0};
    int sum{0};
    
    std::cout << "Enter first integer "; // prompts user for data
    std::cin >> number1; // read first integer from user into number1
    
    std::cout << "Enter the second integer "; // prompts user for data
    std::cin >> number2; // read second integer from user into number2
    
    sum = number1 + number2; //add the numbers; store result in sum
    
    std:: cout << "Sum is " << sum << std::endl; // display sum; end line
    return 0;
}
