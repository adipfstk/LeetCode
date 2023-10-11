#include <iostream>
using namespace std;
/*
Link:
https://leetcode.com/problems/valid-palindrome-ii/submissions/
*/
class Solution
{
public:
    bool validPalindrome(string s)
    {
        int16_t ls = 0;
        int16_t ld = s.size() - 1;
        while (ls <= ld)
        {
            if (s[ls] != s[ld])
            {
                return isPalindrome(s, ls + 1, ld) || isPalindrome(s, ls, ld - 1);
            }
            ls++;
            ld--;
        }
        return true;
    }

    bool isPalindrome(const string &s, int16_t start, int16_t end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
