#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
  std::string result = "";
  for(int i = 0, j = 0; i<plaintext.length(); i++)
  {
    result += shiftChar(plaintext[i], keyword[j] - 'a');
    if(isalpha(plaintext[i]))
    {
      j++; 
    }
    if(j==keyword.size())
    {
      j = 0; 
    }
  }
  return result;
}