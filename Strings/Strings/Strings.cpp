#include <iostream>

int main()
{
    std::string str = "Hello World!";
    int len = str.length();
    char firstSym = str[0];
    char lastSym = str[len - 1];

    std::cout << "string: " << str << std::endl;
    std::cout << "lenght: " << len << std::endl;
    std::cout << "first symbol: " << firstSym << std::endl;
    std::cout << "last symbol: " << lastSym << std::endl;
}
