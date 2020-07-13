/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        std::vector<int> container;
        if(x < 0)
            return false;
        if(x == 0)
            return true;
        while(x != 0)
        {
            container.push_back(x % 10);
            x /= 10;
        }
        const int elementNum = container.size();
        for(int i = 0; i < elementNum / 2; i++)
        {
            if(container[i] != container[elementNum - i - 1])
                return false;
        }
        return true;
    }
};
// @lc code=end

