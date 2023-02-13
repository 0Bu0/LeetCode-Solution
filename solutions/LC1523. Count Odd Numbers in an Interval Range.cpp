// 作者：卜知道
// 时间：2023 02 13
// 网址：https://www.buzhidao.icu
// 相关主题：math

class Solution
{
public:
    int countOdds(int low, int high)
    {
        return (high - low) / 2 + ((low % 2) ^ (high % 2) ? 1 : low % 2);
    }
};

// other solution from lee(https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/solutions/754726/java-c-python-1-lines/)
class Solution
{
public:
    int countOdds(int low, int high)
    {
        return (high + 1) / 2 - low / 2;
    }
};