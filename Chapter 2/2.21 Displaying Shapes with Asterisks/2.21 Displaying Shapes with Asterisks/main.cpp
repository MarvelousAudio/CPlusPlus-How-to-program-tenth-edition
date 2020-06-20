//
//  main.cpp
//  2.21 Displaying Shapes with Asterisks
//
//  Created by ben haywood on 6/19/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << setw(9) << setfill('*') << "\n";
    //cout << endl; doesnt work for setfill() and setw()
    
    
//    cout << endl;
    cout << '*' << setw(7) << setfill(' ') << '*' << "\n";
    cout << '*' << setw(7) << setfill(' ') << '*' << "\n";
    cout << '*' << setw(7) << setfill(' ') << '*' << "\n";
    cout << '*' << setw(7) << setfill(' ') << '*' << "\n";
    cout << '*' << setw(7) << setfill(' ') << '*' << "\n";
    cout << '*' << setw(7) << setfill(' ') << '*' << "\n";
    cout << '*' << setw(7) << setfill(' ') << '*' << "\n";
    cout << setw(9) << setfill('*') << "\n";
    
    cout << "\n" << "\n";
    
    
    cout  << "   ";
    cout << "***" << "\n";
    cout << " *" << "     *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << " *" << "     *" << endl;
    cout  << "   ";
    cout << "***" << "\n";
    
    cout << endl;
    cout << endl;
    
    cout << "   *" << endl;
    cout << "  ***" << endl;
    cout << " *****" << endl;
    cout << "   *" << endl;
    cout << "   *" << endl;
    cout << "   *" << endl;
    cout << "   *" << endl;
    cout << "   *" << endl;
    cout << "   *" << endl;
    
    cout << endl;
    cout << endl;
    
    cout << "     *" << endl;
    cout << "    * *" << endl;
    cout << "   *   *" << endl;
    cout << "  *     *" << endl;
    cout << " *       *" << endl;
    cout << "  *     *" << endl;
    cout << "   *   *" << endl;
    cout << "    * *" << endl;
    cout << "     *" << endl;
    return 0;
}
