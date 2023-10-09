#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &&numbers, int target)
    {
        int left = 0;
        int right = numbers.size() - 1;
        int sum = 0;
        while (left < right)
        {
            sum = numbers[left] + numbers[right];
            if (sum == target)
            {
                return {left + 1, right + 1};
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return {};
    }
};

int main()
{
    Solution sol;

    auto vec = sol.twoSum({2, 7, 11, 15}, 22);
    for (const auto &x : vec)
    {
        std::cout << x << " ";
    }
}