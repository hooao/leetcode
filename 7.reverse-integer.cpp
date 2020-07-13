/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long result = 0;
        while(x != 0)
        {
            result *= 10;
            if(result > 2147483646 || result < (-2147483647))
            {
                result = 0;
                break;
            }
            result += (x % 10);
            x /= 10;
        }
        return result;
    }
};
// @lc code=end

