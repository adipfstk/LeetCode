#include <iostream>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        int ls = 0;
        int ld = x / 2;
        int max = -999;

        if (x == 0)
            return 0;
        while (ls <= ld)
        {
            int mij = (ls + ld) / 2;
            long long num = mij + 1;
            if (num * num > x)
            {
                ld = mij - 1;
            }
            else if (num * num <= x && num > max)
            {
                max = num;
                ls = mij + 1;
            }
        }
        return max;
    }
};

int main()
{
    Solution sol;
    std::cout << sol.mySqrt(712);
}