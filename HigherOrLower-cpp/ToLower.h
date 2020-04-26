#include <string>

void ToLower(std::string& str)
{
    for (unsigned int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
}