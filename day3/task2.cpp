#include <iostream> 
#include <fstream>  // Required for file stream operations (e.g., std::ofstream, std::ifstream)
#include <string>   // Required for using std::string

int main() {
    std::ofstream outputFile("example.txt"); 

    if (outputFile.is_open()) { 
        outputFile << "This is the first line." << std::endl; 
        outputFile << "This is the second line." << std::endl; 
        outputFile.close(); 
        std::cout << "Data written to example.txt successfully." << std::endl;
    } else {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
    }

   
    std::ifstream inputFile("example.txt"); 
    std::string line; 

    if (inputFile.is_open()) { 
        std::cout << "\nReading from example.txt:" << std::endl;
        while (getline(inputFile, line)) {
            std::cout << line << std::endl; 
        }
        inputFile.close(); 
    } else {
        std::cerr << "Error: Unable to open file for reading." << std::endl;
    }

    return 0; 
}