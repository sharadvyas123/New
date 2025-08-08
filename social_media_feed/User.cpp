#include "User.hpp"
#include <iostream>
User::User(std::string name, std::string userId, std ::string bio)
{
    this->name = name;
    this->userId = userId;
    this->bio = bio;
}
/*
User::User(std::string name, std::string username, std::string bio)
 : name(name), username(username), bio(bio) {} //aavi rite pan kari shakie
*/

User::User() : name(""), userId(""), bio("") {}

void User::addPost(Post *post)
{
    this->posts.push_back(post);
}

std::string User::getName() const { return this->name; }

void User::setName(const std::string &name) { this->name = name; }

void User::setBio(const std::string &bio) { this->bio = bio; }

void User :: displayUserInfo() const{
    std::cout <<"Name : " << this->name << "Bio : " << this->bio << "UserID : " << this->userId;
}