#include <iostream>
#include <string>

using std::string;

int caseOfI(string s)
{
    if (s.at(0) == 'I' && s.length() == 2)
    {
        if (s.at(1) == 'V')
        {
            return 4;
        }
        if (s.at(1) == 'X')
        {
            return 9;
        }
        return 1;
    }
    return 0;
}

int caseOfX(string s)
{
    if (s.at(0) == 'X' && s.length() == 2)
    {
        if (s.at(1) == 'L')
            return 40;
        if (s.at(1) == 'C')
            return 90;
        return 10;
    }
    return 0;
}
int caseOfC(string s)
{
    if (s.at(0) == 'C' && s.length() == 2)
    {
        if (s.at(1) == 'D')
            return 400;
        if (s.at(1) == 'M')
            return 900;
        return 100;
    }
    return 0;
}

int romanToInt(string s)
{
    int solution = 0;
    for (int i = 1; i < sizeof(s); i++)
    {
        string subString = s.substr(i - 1, i);
        solution += caseOfI(subString);
        solution += caseOfX(subString);
        solution += caseOfC(subString);
    }
    return solution;
}
int main()
{
    string str = "CM";
    std::cout << romanToInt(str);
    return 0;
}