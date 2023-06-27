//does not work  dont know why :( ;
//https://leetcode.com/problems/reverse-integer/

#include <string>
class Solution {
public:
    int reverse(int x) {
        return converter(reverseString(std::to_string(x),x));
    }
    std::string reverseString(const std::string &str,int x)
{
    std::string reversed;
    reversed.reserve(str.length());
    if (x < 0)
    {
        reversed += '-';
    }
    for (int i = str.length() - 1; i >= 0; --i)
    {
        reversed.push_back(str[i]);
    }
    return reversed;
}

int converter(std::string str)
{
    const char *c = str.c_str();
    return std::atoi(c);
}
};
