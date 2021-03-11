#include <iostream>
#include "caesar.h"

char shifting(char letter, int spaces){
    if((int)letter >= 'a' && (int)letter <= 'z'){
        letter = (int)letter - 'a';
        spaces = spaces % 26;
        letter = (letter + spaces) % 26;
        if(letter < 0){
            letter = letter + 123;
        }else{
            letter = letter + 97;
        }
        return (char)letter; // converting back to letters
    }else if((int)letter >= 'A' && (int)letter <= 'Z'){
        letter = (int)letter - 'A';
        spaces = spaces % 26;
        letter = (letter + spaces) % 26;
        if(letter < 0){
            letter += 91;
        }else{
            letter += 65;
        }
        return (char)letter; // converting back to letters
    }else{
        return letter;
    }
}

std::string caesarCipher(std::string input, int shift){
    char letter;
    for(int i = 0; i < input.length(); i++){
        input[i] = shifting(input[i], shift);
    }
    return input;
}


