// TextPost.hpp
#include "Post.hpp"
class TextPost : public Post {
public:
    TextPost(std::string authorId, std::string content);
    void display() override;
};
