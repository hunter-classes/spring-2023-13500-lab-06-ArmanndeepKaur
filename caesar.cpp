#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"


// A helper function to shift one character by rshift
char shiftChar(char c, int rshift)
{
  if(islower(c))
  {
    return (c - 'a' + rshift) % 26 + 'a';
  }
  if(isupper(c))
  {
    return(c - 'A' + rshift) % 26 + 'A';
  }
  return c;
}


// Caesar cipher encryption
std::string encryptCaesar(std::string plaintext, int rshift)
{
  char c;
  for(int i = 0; i < plaintext.length(); i++)
  {
    c = plaintext[i];
    plaintext[i] = shiftChar((int)c, rshift);
  }
  return plaintext;
}