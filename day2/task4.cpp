#include <iostream>
#include <string>
#include <unordered_set> // For std::unordered_set
#include <cctype>        // For std::tolower

int countVowelsEfficient(const std::string& str) { 
    const std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'}; 
    int count = 0; 

    for (char ch : str) { 
        if (vowels.count(std::tolower(ch))) { 
            count++; 
        }
    }
    return count; 
}

int main() {
    std::string text ;
    std:: cout<<"enter the text : ";
    std :: cin >> text;
    int vowelCount = countVowelsEfficient(text); 
    std::cout << "The number of vowels in \"" << text << "\" is: " << vowelCount << std::endl; 

    return 0;
}
