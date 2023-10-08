#include <iostream>
#include <string>
#include <algorithm>

class Solution
{
public:
    bool isPalindrome(std::string s)
    {
        s.erase(std::remove_if(s.begin(), s.end(), isNotLetter), s.end());
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c)
                       { return std::tolower(c); });
        int left = 0;
        int right = s.length() - 1;

        while (left < right)
        {
            if (s[left++] != s[right--])
            {
                return false;
            }
        }

        return true;
    }

    static bool isNotLetter(char c)
    {
        return !std::isalnum(c);
    }
};