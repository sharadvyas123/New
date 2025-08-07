// Post.hpp
#ifndef POST_HPP
#define POST_HPP

#include <string>

class Post {
protected:
    std::string authorId;
    std::string content;
    int likes;

public:
    Post(std::string authorId, std::string content);
    virtual void display() = 0; // pure virtual
    virtual ~Post() {}
};

#endif
