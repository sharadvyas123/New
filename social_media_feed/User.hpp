// User.hpp
#ifndef USER_HPP
#define USER_HPP

#include <string>
#include <vector>
#include "Post.hpp"

class User {
private:
    std::string name;
    std::string userId;
    std :: string bio;
    std::vector<Post*> posts;
    std::vector<User*> followers;

public:
    User();
    User(std::string name, std::string userId , std ::string bio);
    std::string getName() const;
    void setName(const std::string &name);
    void addPost(Post* post);
    void follow(User* other);
    std::vector<Post*> getFeed();
    void displayUserInfo() const;
    void setBio(const std::string &bio);
};

#endif
