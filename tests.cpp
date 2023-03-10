#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"


// add your tests here
TEST_CASE ("Task B: Caesar")
{
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!")
}

TEST_CASE ("Task C: Vigenere")
{
    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!")
}

TEST_CASE ("Task D: Descryption")
{
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!")
    CHECK(decryptVigenere("Jevpq, Wyvnd!","cake") == "Hello, World!")
}
