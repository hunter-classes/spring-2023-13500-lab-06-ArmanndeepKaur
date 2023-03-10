#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{

  //TASK B 
  std::cout<<encryptCaesar("Hello, World", 10)<<"\n";
  std::cout<<encryptCaesar("Hi, Everyone", 15)<<"\n";

  //Task C
  std::cout<<encryptVigenere("Hello, World!", "cake")<<"\n";
  std::cout<<encryptVigenere("Bye, World!", "make")<<"\n";

  //Task D
  std::cout<<decryptCaesar("Rovvy, Gybvn!", 10)<<"\n";
  std::cout<<decryptVigenere("Jevpq, Wyvnd!","cake")<<"\n";

  return 0;
}
