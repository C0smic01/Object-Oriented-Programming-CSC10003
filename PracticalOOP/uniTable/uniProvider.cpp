#include "uniProvider.h"

std::vector<University> uniProvider::read(std::string filename)
{
    std::vector<University> result;
    std::fstream file(filename, std::ios::in);

    if (file.good())
    {
        std::string line = "";
        std::getline(file, line);

        while (std::getline(file, line))
        {
            std::stringstream ss(line);
            std::string token = "";
            std::vector<std::string> tokens;

            while (std::getline(ss, token, ','))
            {
                int pos1 = token.find("\"");
                // If the field is quoted
                if (pos1 == 0)
                {
                    std::string quotedField = "";
                    quotedField += token.substr(1);
                    // If the field contains comma, keep reading until the closing quote
                    while (std::getline(ss, token, ','))
                    {
                        quotedField += "," + token;
                        int pos2 = token.rfind("\"");
                        if (pos2 == token.size() - 1)
                        {
                            quotedField.pop_back();
                            break;
                        }
                    }
                    tokens.push_back(quotedField);
                }
                // If the field is not quoted
                else tokens.push_back(token);
            }
            result.push_back(University(tokens[0], tokens[4]));
        }
    }
    file.close();
    return result;
}
