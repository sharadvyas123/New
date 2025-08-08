// Post.hpp
#ifndef POST_HPP
#define POST_HPP

#include <string>
#include <ctime>

class Post {
protected:
    std :: string author;
    std::string authorId;
    std::string content;
    time_t timestamp; // coments list pachhi karsu 
    int likes; // aa atyare int chhe pachi tenu pan .hpp banse 

public:
    Post();
    Post( std::string content , std:: string author , std::string authorId , time_t timestamp);
    void display(); // pure virtual
    std::string getContent() const;
    std::string getAuthorname() const;
    std::string getTimestamp() const;

    void setContent(const std::string &content);
    void setAuthorUsername(const std::string &username);
    void setTimestamp(const std::string &timestamp);

    void displayPost() const;
};

#endif
