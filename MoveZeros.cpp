#include <iostream>
#include <vector>
using namespace std;
/*
Link:
https://leetcode.com/problems/move-zeroes/description/
*/
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int left = 0;
        int right = 0;
        int size = nums.size();

        if (size <= 1)
        {
            return;
        }

        while (right < size)
        {
            if (nums[right] != 0)
            {
                nums[left] = nums[right];
                left++;
            }
            right++;
        }
        while (left < right)
        {
            nums[left] = 0;
            left++;
        }
    }
};

int main()
{
    std::vector<int> myVec = {1, 0};
    Solution sol;
    sol.moveZeroes(myVec);
}