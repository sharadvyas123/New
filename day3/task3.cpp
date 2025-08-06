#include <iostream>
#include <string>
#include <fstream>

void add_into_file(std ::string str)
{
    std::fstream file("text.txt", std::ios::out | std::ios::app);
    if (file.is_open())
    {
        file << str << std ::endl;
        file.close();
        std::cout << "Data written to example.txt successfully." << std::endl;
    }
    else
    {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
    }
}

int main()
{
    std::string str;
    std ::cout << "Enter a string : " << std :: endl;
    std::getline(std::cin, str);
    add_into_file(str);
    return 0;
}