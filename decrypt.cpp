#include <iostream>
#include "decrypt.h"
#include "caesar.h"

std::string decryptCaesar(std::string cipherText, int shift){
    for(int i = 0; i < cipherText.length(); i++){
        cipherText[i] = shifting(cipherText[i], - shift);        
    }
    return cipherText;
}

std::string decryptVigenere(std::string cipherText, std::string keyWord){
    int counter = 0;
    char keyLetter;
    for(int i = 0; i < cipherText.length(); i++){
        if(isalpha(cipherText[i])){
            keyLetter = (int)keyWord[counter % (keyWord.length())];
            if(keyLetter < 91){
                cipherText[i] = shifting(cipherText[i], -(keyLetter - 65));
            }else{
                cipherText[i] = shifting(cipherText[i], -(keyLetter - 97));
            }   
            counter += 1;
        }      
    }
    return cipherText;
}

