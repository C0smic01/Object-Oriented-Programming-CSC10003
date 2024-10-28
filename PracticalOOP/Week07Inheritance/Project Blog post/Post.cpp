#include "Post.h"

Post::Post() {};

Post::Post(std::string author, std::string title, std::string content): _author(author), _title(title), _content(content) {};

std::string Post::toString()
{
	std::string postFormat = std::format("Author: {}\nTitle: {}\nContent: \n{}", _author, _title, _content);
	return postFormat;
}