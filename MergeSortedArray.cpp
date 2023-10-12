#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Link:
https://leetcode.com/problems/merge-sorted-array/description/
*/
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int last = m + n - 1;
        n = n - 1;
        m = m - 1;

        while (n >= 0)
        {
            if (m >= 0 && nums1[m] > nums2[n])
            {
                nums1[last] = nums1[m];
                m--;
            }
            else
            {
                nums1[last] = nums2[n];
                n--;
            }
            last--;
        }
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0, 0};

    int m = 3;
    vector<int> nums2 = {2, 2, 5, 6};
    int n = 3;

    sol.merge(nums1, m, nums2, n);

    for (const auto &x : nums1)
    {
        std::cout << x << " ";
    }
}