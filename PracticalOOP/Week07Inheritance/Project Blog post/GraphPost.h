#pragma once
#include "Post.h"
#include <tuple>

class GraphPost : public Post
{
private:
	int _likeCount;
	std::vector<std::tuple<std::string, std::string>> _comments;
public:
	GraphPost();
	GraphPost(std::string author, std::string title, std::string content, int likeCount, std::vector<std::tuple<std::string, std::string>> comments);
	std::string toString();
};