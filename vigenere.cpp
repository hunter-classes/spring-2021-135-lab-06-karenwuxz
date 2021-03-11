#include <iostream>
#include "vigenere.h"
#include "caesar.h"

std::string vigenereCipher(std::string input, std::string keyWord){
    // all i have to figure out is the amount of shifts i have to do for the keyWord
    int counter = 0;
    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i])){
            input[i] = shifting(input[i] , (int)keyWord[counter % (keyWord.length())] - 97);
            counter += 1;
        }
    }
    return input;
}

 
