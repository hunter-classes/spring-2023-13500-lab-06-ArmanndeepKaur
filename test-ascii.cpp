#include <iostream>
#include <string>

int main()
{
    std::string str = "Cat :3 Dog"; //input
    for(int i = 0; i < str.length(); i++) 
    {
        std::cout<<str[i]<<" "<<(int)(str[i])<<"\n"; //conversion
    }
    return 0; 
}