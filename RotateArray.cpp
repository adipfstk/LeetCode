#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

/*
Link:
https://leetcode.com/problems/rotate-array/?envType=study-plan-v2&envId=top-interview-150
*/

class Solution
{
public:
    void rotate(std::vector<int> &nums, int k)
    {
        int size = nums.size();
        std::deque<int> dq(std::make_move_iterator(nums.begin()), std::make_move_iterator(nums.end()));

        k = k % size;

        if (k == 0)
        {
            return;
        }

        for (int i = 0; i < k; i++)
        {
            int elem = std::move(dq.back());
            dq.pop_back();
            dq.push_front(std::move(elem));
        }

        nums = std::vector<int>(std::make_move_iterator(dq.begin()), std::make_move_iterator(dq.end()));
    }
};
