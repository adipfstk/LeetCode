#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Link:
https://leetcode.com/problems/valid-anagram/submissions/
*/

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (std::size(s) != std::size(t))
            return false;

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        return s == t;
    }
};
