#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main(){
  std::cout << caesarCipher("A Light-Year Apart", 5) << std::endl;
  std::cout << caesarCipher("Hello, World!", 10) << std::endl;
  std::cout << caesarCipher("Cat", 5) << std::endl;
  std::cout << caesarCipher("CAESAR IS HUNGRY", 1) << std::endl;

  std::cout << decryptCaesar("F Qnlmy-Djfw Fufwy", 5) << std::endl;
  std::cout << decryptCaesar("Rovvy, Gybvn!", 10) << std::endl;
  std::cout << decryptCaesar("Hfy", 5) << std::endl;
  std::cout << decryptCaesar("DBFTBS JT IVOHSZ", 1) << std::endl;
  
  std::cout << vigenereCipher("Hello, World!", "cake") << std::endl;
  std::cout << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;




  std::cout << caesarCipher("e", 101) << std::endl;
  std::cout << decryptCaesar("b", 101) << std::endl;




  return 0;
}
