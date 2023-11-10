#include <iostream>
/*
Link:
https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/
*/

class Solution
{
public:
    int maxVowels(std::string s, int k)
    {
        int lens = s.length();
        int max_value = 0;
        int sum = 0;

        for (size_t i = 0; i < lens; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                sum++;
            }

            if (i >= k - 1)
            {
                max_value = std::max(max_value, sum);

                if (s[i - (k - 1)] == 'a' || s[i - (k - 1)] == 'e' || s[i - (k - 1)] == 'i' || s[i - (k - 1)] == 'o' || s[i - (k - 1)] == 'u')
                {
                    sum--;
                }
            }
        }

        return max_value;
    }
};
