#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

std::string decryptCaesar(std::string ciphertext, int rshift)
{
  std::string decrypt = "";
  int rs = 26 - rshift;
  for(int i = 0; i < ciphertext.length(); i++)
  {
    char c = ciphertext[i];
    if(isalpha(c))
    {
      decrypt += shiftChar(c, rs);
    }
    else
    {
      decrypt += c;
    }
  }
  return decrypt;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword)
{
  std::string plaintext0 = "";
  for(int i = 0, j = 0; i < ciphertext.length(); i++)
  {
    if(j > keyword.length() -1)
    {
      j = 0;
    }
    if(isalpha(ciphertext[i]))
    {
      plaintext0 += shiftChar(ciphertext[i], 26 - (keyword[j]-97));
      j += 1;
    }
    else 
    {
      plaintext0 += ciphertext[i];
    }
  }
  return plaintext0;
}
