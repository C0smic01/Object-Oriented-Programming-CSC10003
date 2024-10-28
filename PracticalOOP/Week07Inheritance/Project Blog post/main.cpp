#include "Post.h"
#include "GraphPost.h"
#include <iostream>
#include <vector>
int main() 
{
	std::string author = "Jane";
	std::string title = "3 tips to learn English effectively";
	std::string content = (std::string)"To learn English effectively, you can try these 3 tips.\n" + (std::string)"1. Practice on a daily basis.\n" + "2. Take time to understand difficult paragraphs\n"+ (std::string)"3. Try new things everyday";
	int likeCount = 5;
	std::vector<std::tuple<std::string, std::string>> comments;
	comments.push_back(std::make_tuple("Anna", "Great work."));
	comments.push_back(std::make_tuple("Blash", "This helps me a lot!"));
	comments.push_back(std::make_tuple("Jack", "Thanks for your post."));

	GraphPost gp(author, title, content, likeCount, comments);
	std::cout << gp.toString();
	return 0;
}