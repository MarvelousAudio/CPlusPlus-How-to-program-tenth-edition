//
//  main.cpp
//  Using functions isspace, iscntrl, ispunct, isprint and isgraph
//
//  Created by ben haywood on 5/7/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cctype> // character-handling function prototypes

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "According to ispace:\nNewline "
    << (isspace('\n') ? "is a" : "is not a")
    << " whitespace character\nHorizontal tab "
    << (isspace('\t') ? "is a" : "is not a")
    << " whitespace character\n"
    << (isspace('%') ? "% is a" : "% is not a")
    << " whitespace character\n";
    
    
    cout << "\nAccording to iscntrl:\nNewline "
    << (iscntrl('\n') ? "is a" : "is not a")
    << " control character\n"
    << (iscntrl('$') ? "is a" : "$ is not a")
    << "control character\n";
    
    cout << "\nAccording to ispunct:\n"
    << (ispunct(';') ? "; is a" : "; is not a")
    << " punctuation character\n"
    << (ispunct('Y') ? "Y is a" : "Y is not a")
    << " punctuation character\n"
    << (ispunct('#') ? "# is a" : "# is not a")
    << " puncuation character\n";
    
    cout << "\nAccourind to isprint:\n"
    << (isprint('$') ? "is a" : "$ is not a")
    << " printing character\nAlert "
    << (isprint('\a') ? "is a" : "is not a")
    << " printing character\nSpace "
    << (isprint(' ') ? "is a" : "is not a")
    << "printing character\n";
    
    cout << "\nAccording to isgraph:\n"
    << (isgraph('Q') ? "Q is a" : "Q is not a")
    << " printing character other than a space\nSpace "
    << (isgraph(' ') ? "is a" : "is not a")
    << " printing character other than a space" << endl;
    
    
    return 0;
}
