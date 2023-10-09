#include <vector>
#include <iostream>
using namespace std;
/*
Link:
https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int16_t left = 0;
        int16_t right = 1;
        int16_t size = nums.size();
        int16_t nonDuplicateSize = 0;

        while (right < size)
        {
            if (nums[left] != nums[right])
            {
                nums[++left] = nums[right];
            }
            else
            {
                right++;
            }
        }

        return left + 1;
    }
};

int main()
{
    Solution sol;
    std::vector<int> x = {1, 1, 2};

    sol.removeDuplicates(x);

    for (const auto &y : x)
    {
        std::cout << y << " ";
    }
}