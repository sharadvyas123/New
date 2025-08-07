#include "User.hpp"

User::User(std::string name, std::string userId) {
    this->name = name;
    this->userId = userId;
}

void User:: addPost(Post* post){
    this->posts.push_back(post);
}