// 作者：卜知道
// 时间：2023 02 13
// 网址：https://www.buzhidao.icu
// 相关主题：dfs

class Solution
{
public:
    // time complexity: O(n2)
    // space complexity: O(n)
    int brute_force_solution(vector<int> &nums)
    {
        int res = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i)
        {
            vector<int> visit(n);
            int t = i;
            int s = 0;
            while (!visit[t])
            {
                ++s;
                visit[t] = 1;
                t = nums[t];
            }
            res = max(res, s);
        }
        return res;
    }

    // time complexity: O(n)
    // space complexity: O(n)
    int dfs_cut(vector<int> &nums)
    {
        int res = 0;
        int n = nums.size();

        vector<int> visit(n);
        for (int i = 0; i < n; ++i)
        {
            int t = i;
            int s = 0;
            while (!visit[t])
            {
                ++s;
                visit[t] = 1;
                t = nums[t];
            }
            res = max(res, s);
        }
        return res;
    }
    int arrayNesting(vector<int> &nums)
    {
        return dfs_cut(nums);
    }
};