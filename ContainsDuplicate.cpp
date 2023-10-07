#include <iostream>
#include <unordered_map>
#include <vector>

/*
Link:
    https://leetcode.com/problems/contains-duplicate
*/
class Solution
{
public:
    bool containsDuplicate(std::vector<int> &nums)
    {
        std::unordered_map<int, int> map;
        for (const auto &x : nums)
        {
            if (map[x] == 1)
                return true;
            else
                map[x] = 1;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    std::vector<int> x = {1, 2, 3, 3, 4};
    sol.containsDuplicate(x);
}