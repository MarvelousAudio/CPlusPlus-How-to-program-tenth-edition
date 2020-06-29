//
//  main.cpp
//  4.26 square of astrisks
//
//  Created by ben haywood on 6/28/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int input = 0;
    
    cout << "Enter a number between 1 and 20 and press ENTER\n";
    cin >> input;
    
    if (input >= 1 && input <= 20)
    {
        
    
    
        for ( int i = 0; i < input; i++)
        {
            
            
            for (int x = 0; x < input; x++)
            {
                if (i == 0 || i == (input - 1) )
                {
                    cout << "*";
                    
                }
   
                if (x == 0 && i != 0 && i != input - 1)
                {
                    cout << "*";
                }
    
                if (x == input - 1 && i != input - 1 && i != 0)
                {
                    cout << "*";
                }
                if (x != 0 && x != (input - 1) && i != 0 && i != (input-1))
                {
                    cout << " ";
                }

               
            }
            
            
            cout << endl;
        }
    }
    else
    {
        cout << "invalide input! END" << endl;
    }
    return 0;
}
