//
//  main.cpp
//  4.18 Tabular output
//
//  Created by ben haywood on 6/27/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 1;
    
    cout << "N\t" << "10*N\t" << "100*N\t" << "1000*N\n";
    while ( n <= 5)
    {
        cout << n << "\t" << n * 10 << "\t\t" << n * 100 << "\t\t" << n * 1000 << "\n";
        
        
        ++n;
    }
    return 0;
}
