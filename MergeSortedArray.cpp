#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Link:
https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150
*/

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = m; i < nums1.size(); i++)
        {
            nums1[i] = nums2[nums1.size() - i - 1];
        }

        std::sort(nums1.begin(), nums1.end());
    }
};
int main()
{
    vector<int> nums1{1, 2, 3, 0, 0, 0};
    vector<int> nums2{2, 5, 6};
    Solution sol;
    sol.merge(nums1, 3, nums2, 3);
    for (const auto &x : nums1)
    {
        std::cout << x << " ";
    }
}