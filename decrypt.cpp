#include <iostream>
#include "decrypt.h"
#include "caesar.h"

std::string decryptCaesar(std::string cipherText, int shift){
    for(int i = 0; i < cipherText.length(); i++){
        // error here with the reverse loop back EX: for H - 10 
        // you probably have to change shift here
        // you shouldn't change the input string (not a good practice) make a result string 
        cipherText[i] = shifting(cipherText[i], - shift);        
    }
    return cipherText;
}

std::string decryptVigenere(std::string cipherText, std::string keyWord){
    int counter = 0;
    for(int i = 0; i < cipherText.length(); i++){
        if(isalpha(cipherText[i])){
            cipherText[i] = shifting(cipherText[i], -((int)keyWord[counter % (keyWord.length())] - 97));   
            counter += 1;
        }      
    }
    return cipherText;
}

