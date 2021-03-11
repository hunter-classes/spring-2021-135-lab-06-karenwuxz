#include <iostream>
#include "vigenere.h"
#include "caesar.h"

std::string vigenereCipher(std::string input, std::string keyWord){
    int counter = 0;
    char keyLetter;
    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i])){
            keyLetter = (int)keyWord[counter % (keyWord.length())];
            if(keyLetter < 91){
                input[i] = shifting(input[i] , keyLetter - 65);
            }else{
                input[i] = shifting(input[i] , keyLetter - 97);
            }
            counter += 1;
        }
    }
    return input;
}

 
