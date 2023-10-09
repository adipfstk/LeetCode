#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        std::unordered_map<int, int> map;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        for (const auto &[k, v] : map)
        {
            count += (v * (v - 1)) / 2;
        }

        return count;
    }
};

int main()
{
    Solution sol;
    std::vector<int> vec = {1, 1, 1, 1};
    std::cout << sol.numIdenticalPairs(vec);
}