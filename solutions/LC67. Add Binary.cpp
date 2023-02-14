// 作者：卜知道
// 时间：2023 02 13
// 网址：https://www.buzhidao.icu
// 相关主题：math

// time complexity: O(n)
// space complexity: O(1)
class Solution
{
public:
    void check_if_add(char &c, int &af)
    {
        if (c > '1')
        {
            c -= 2;
            af = 1;
        }
        else
            af = 0;
    }

    string addBinary(string a, string b)
    {
        int len_a = a.size();
        int len_b = b.size();
        if (len_a < len_b)
            return addBinary(b, a);

        // add b to a
        int add_flag = 0;
        int i = 0;
        for (; i < len_b; ++i)
        {
            int ai = len_a - 1 - i;
            int bi = len_b - 1 - i;
            a[ai] += b[bi] - '0' + add_flag;
            check_if_add(a[ai], add_flag);
        }

        // add carry
        while (i < len_a && add_flag)
        {
            ++a[len_a - 1 - i];
            check_if_add(a[len_a - 1 - i], add_flag);
            ++i;
        }

        // check if need add other char '1' to a
        return (add_flag ? "1" : "") + a;
    }
};