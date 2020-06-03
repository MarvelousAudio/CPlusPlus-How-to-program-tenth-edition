//
//  main.cpp
//  Using strtok to tokenize a string
//
//  Created by ben haywood on 6/2/20.
//  Copyright © 2020 ben haywood. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char sentence[]{"This is a sentence with 7 tokens"};
    
    cout << "The string to be tokenized is:\n" << sentence
    << "\n\nThe tokens are:\n\n";
    
    // begin tokenization of sentence
    char* tokenPtr{strtok(sentence, " ")};
    
    // continue tokenizing sentence until tokenPtr becomes NULL
    while (tokenPtr != NULL) {
        cout << tokenPtr << '\n';
        tokenPtr = strtok(NULL, " "); //get next token
    }
    
    cout << "\nAfter strtok, sentence = " << sentence << endl;
    
    return 0;
}
// tokenize is words in the sentence and looks for spaces till token is 0 or "this"
