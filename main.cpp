#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main(){
  std::cout << "[Caesar's Cipher] Encrypting {A Light-Year Apart}: " << std::endl;
  std::cout << caesarCipher("A Light-Year Apart", 5) << std::endl;

  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  std::cout << "[Caesar's Cipher] Decrypting {F Qnlmy-Djfw Fufwy}: " << std::endl;
  std::cout << decryptCaesar("F Qnlmy-Djfw Fufwy", 5) << std::endl;
  
  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  std::cout << "[Caesar's Cipher] Encrypting {Hello, World!}: " << std::endl;
  std::cout << caesarCipher("Hello, World!", 10) << std::endl;

  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  std::cout << "[Caesar's Cipher] Decrypting {Rovvy, Gybvn!}: " << std::endl;
  std::cout << decryptCaesar("Rovvy, Gybvn!", 10) << std::endl;

  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  std::cout << "[Caesar's Cipher] Encrypting {CAESAR IS HUNGRY}: " << std::endl;
  std::cout << caesarCipher("CAESAR IS HUNGRY", 150) << std::endl;

  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  std::cout << "[Caesar's Cipher] Decrypting {WUYMUL CM BOHALS}: " << std::endl;
  std::cout << decryptCaesar("WUYMUL CM BOHALS", 150) << std::endl;

  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  std::cout << "[Vigenere's Cipher] Encrypting {Honey there is no right way} [KeyWord = SomeoneNew]: " << std::endl;
  std::cout << vigenereCipher("Honey there is no right way", "SomeoneNew") << std::endl;

  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  std::cout << "[Vigenere's Cipher] Decrypting {Zczim glrva ag zs fvkux ssm} [KeyWord = SomeoneNew]: " << std::endl;
  std::cout << decryptVigenere("Zczim glrva ag zs fvkux ssm", "SomeoneNew") << std::endl;

  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  std::cout << "[Vigenere's Cipher] Encrypting {It's not the wakin', it's the risin} [KeyWord = power]: " << std::endl;
  std::cout << vigenereCipher("It's not the wakin', it's the risin", "power") << std::endl;

  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  std::cout << "[Vigenere's Cipher] Decrypting {Xh'o rfi hdi npyer', zi'g plv gwome} [KeyWord = power]: " << std::endl;
  std::cout << decryptVigenere("Xh'o rfi hdi npyer', zi'g plv gwome", "power") << std::endl;

  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  std::cout << "[Vigenere's Cipher] Encrypting {I planned to meet him tonight in Teheran} [KeyWord = faith]: " << std::endl;
  std::cout << vigenereCipher("I planned to meet him tonight in Teheran", "faith") << std::endl;

  std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

  std::cout << "[Vigenere's Cipher] Decrypting {N pttusel mv remm onm bhungpm ps Tmalwav} [KeyWord = faith]: " << std::endl;
  std::cout << decryptVigenere("N pttusel mv remm onm bhungpm ps Tmalwav", "faith") << std::endl;


  return 0;
}
