// TextPost.hpp
#include "Post.hpp"
#include<ctime>
#include <iostream>

Post :: Post() :  author("") , authorId("") ,content(""), timestamp(std::time(nullptr)) {}

Post ::Post( std::string content , std:: string author , std::string authorId , time_t timestamp)
    :author(author),
    authorId(authorId),
    content(content),
    timestamp(std::time(nullptr))
{}

void Post::displayPost() const {
    // Convert time_t → struct tm
    struct tm *timeinfo = std::localtime(&timestamp);

    // Format as "YYYY-MM-DD HH:MM"
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M", timeinfo);

    std::cout << "[" << buffer << "] @" << author
              << ": " << content << "\n";
}