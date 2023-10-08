#include <iostream>
#include <algorithm>
using namespace std;
/*
    Link: https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/
*/
class Solution
{
public:
    string reverseVowels(string &s)
    {
        int left = 0;
        int right = s.length() - 1;
        while (left < right)
        {
            if (!isVowel(s[left]))
            {
                left++;
            }
            else if (!isVowel(s[right]))
            {
                right--;
            }
            else
            {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }

private:
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
};

int main()
{
    std::string str = "hello";
    Solution solution;
    solution.reverseVowels(str);
    std::cout << str;
}