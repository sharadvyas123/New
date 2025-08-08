#include "User.hpp"
#include "Post.hpp"
#include <iostream>
#include <string>


int main()
{
    std :: string name = "Sharad";
    std :: string Id = "1";
    std :: string bio = "Building cool stuff in C++";
    User u1(name ,Id , bio);
    u1.displayUserInfo();
    std::string content ="Hello World!";
    time_t timestamp = time(nullptr);
    Post p1(content , name ,Id, timestamp);
    p1.displayPost();
    return 0;
}