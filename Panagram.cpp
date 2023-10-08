#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
/*
Link:
    https://leetcode.com/problems/check-if-the-sentence-is-pangram
*/
class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        std::unordered_map<char, int> map;
        for (const auto &x : sentence)
        {
            map[x]++;
        }
        if (map['a'] >= 1 && map['z'] >= 1 && map.size() >= 26)
        {
            return true;
        }

        return false;
    }
};

int main()
{

    Solution sol;
    std::string a = "jwtucoucmdfwxxqnxzkaxoglszmfrcvjoiunqqausaxxaaijyqdqgvdnqcaihwilqkpivenpnekioyqujrdrovqrlxovcucjqzjsxmllfgndfprctxvxwlzjtciqxgsxfwhmuzqvlksyuztoetyjugmswfjtawwaqmwyxmvo";
    time_t start = time(&start);
    sol.checkIfPangram(a);
    time_t end = time(&end);
    cout << end - start << " seconds";
}