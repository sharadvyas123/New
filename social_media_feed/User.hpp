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
    std::vector<Post*> posts;
    std::vector<User*> followers;

public:
    User(std::string name, std::string userId);
    void addPost(Post* post);
    void follow(User* other);
    std::vector<Post*> getFeed();
    void displayUserInfo();
};

#endif
