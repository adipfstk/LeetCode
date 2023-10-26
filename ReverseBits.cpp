class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t res = 0u;
        for (uint_fast8_t i = 0u; i < 32u; ++i)
        {
            uint32_t bit = (n >> i) & 0x1;
            res |= (bit << (31 - i));
        }
        return res;
    }
};