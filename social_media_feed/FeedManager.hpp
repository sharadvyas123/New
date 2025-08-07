// FeedManager.hpp
#ifndef FEED_MANAGER_HPP
#define FEED_MANAGER_HPP

#include <vector>
#include "User.hpp"

class FeedManager {
public:
    void showFeed(User* user);
    void notifyFollowers(User* user, Post* post);
};

#endif
