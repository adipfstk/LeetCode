#include <vector>

class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        int left = 0;
        int right = 1;
        int maxdiff = 0;
        while (left <= right && right < prices.size())
        {
            if (prices[right] - prices[left] > maxdiff)
            {
                maxdiff = prices[right] - prices[left];
            }
            if (prices[left] > prices[right])
            {
                left = right;
            }
            right++;
        }
        return maxdiff;
    }
};
