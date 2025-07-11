#include "webserv.hpp"


size_t countWords(std::stringstream& ss) {
    size_t count = 0;
    std::string word;
    while (ss >> word) {
        count++;
    }
    ss.clear();
    ss.seekg(0);
    return count;
}

size_t countWords(std::string const str) {
	std::stringstream ss(str);
    return countWords(ss);
}


bool strIsDigit(std::string const str)
{
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++)
		if (!std::isdigit(*it))
			return (false);
	return(true);
}


std::string ltrim(std::string str)
{
	for (std::string::iterator it = str.begin(); it != str.end(); it++)
	{
		if (*it != ' ' && *it != '\t')
		{
			str.erase(str.begin(), it);
			return str;
		}
	}
	return std::string("");
}
std::string rtrim(std::string str)
{
	for (std::string::iterator it = str.end() - 1; it != str.begin() - 1; it--)
	{
		if (*it != ' ' && *it != '\t')
		{
			str.erase(it + 1, str.end());
			return str;
		}
	}
	return std::string("");
}

std::string strTrim(std::string str) {return(rtrim(ltrim(str))); 
}
