/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    bool isNegetive(string s, int index)
    {
        //In this function, it will detected current character and the next character.
        //If NEXT charachter larger than CURRENT one, then, current one should be negetive.
        //Otherwise, it is positive.
        int currentVal = charToInteger(s, index);
        int nextVal = (index + 1) < (s.size()) ? (charToInteger(s, index + 1)) : (0);
        if (currentVal >= nextVal)
            return false;
        return true;
    }
    int charToInteger(string s, int index)
    {
        int val = 0;
        switch(s[index])
        {
            case 'I': val = 1; break;
            case 'V': val = 5; break;
            case 'X': val = 10; break;
            case 'L': val = 50; break;
            case 'C': val = 100; break;
            case 'D': val = 500; break;
            case 'M': val = 1000; break;
        }
        return val;
    }
    int romanToInt(string s) {
        int sum = 0;
        int multiply = 1;
        for(int i = 0; i < s.size(); i++)
        {
            multiply = isNegetive(s, i)? (-1) : 1;
            sum += (multiply * charToInteger(s, i));
        }
        return sum;
    }
};
// @lc code=end

