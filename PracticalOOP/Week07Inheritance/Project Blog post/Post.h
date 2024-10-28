#pragma once
#include <iostream>
#include <vector>
#include <format>
#include <string>

class Post
{
protected:
	std::string _author;
	std::string _title;
	std::string _content;
public:
	Post();
	Post(std::string author, std::string title, std::string content);
	std::string toString();
};