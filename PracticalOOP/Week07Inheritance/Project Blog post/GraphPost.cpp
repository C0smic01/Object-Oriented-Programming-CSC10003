#include "GraphPost.h"

GraphPost::GraphPost() : Post()
{
	_likeCount = 0;
}

GraphPost::GraphPost(std::string author, std::string title, std::string content, int likeCount, std::vector<std::tuple<std::string, std::string>> comments) : Post(author, title, content)
{
	_likeCount = likeCount;
	_comments = comments;
}

std::string GraphPost::toString()
{
	std::string postFormat = std::format("Author: {}\nTitle: {}\nContent: \n{}\n\nLikes: {}\nComments: {}\n", _author, _title, _content, _likeCount, _comments.size());
	for (int i = 0; i < _comments.size(); i++)
	{
		postFormat += std::format("- {}: {}\n", std::get<0>(_comments[i]), std::get<1>(_comments[i]));
	}
	return postFormat;
}

