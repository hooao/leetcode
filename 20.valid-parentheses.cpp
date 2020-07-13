// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem20.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isLeftParent(char ch)
    {
        bool leftParent = false;
        switch(ch)
        {
            case '(':
            case '[':
            case '{':
                leftParent = true;
            break;
            default: break;
        }
        return leftParent;
    }
    bool isPair(char ch1, char ch2)
    {
        if(ch1 == '(') return (ch2 == ')');
        if(ch1 == '[') return (ch2 == ']');
        if(ch1 == '{') return (ch2 == '}');
        return false;
    }
    bool isValid(string s) {
        if(s.size() % 2)
            return false;
        //we need a stack to remember the left parenthese, until we found the right
        //parenthese, we try to pop out and verify if they are in the right order.
        std::vector<char> stashParentheses;
        for(int i = 0; i < s.size(); i++)
        {
            if(isLeftParent(s.at(i)))
            {
                stashParentheses.push_back(s.at(i));
            }
            else
            {
                //we got a right parenthese, check the stash.
                auto ch = stashParentheses.size() ? stashParentheses.back() : 0;
                if(isPair(ch, s.at(i)) == false)
                {
                    return false;
                }
                stashParentheses.pop_back();
            }
        }
        if(stashParentheses.size()) return false;//If it is not empty, also false
        return true;
    }
};
// @lc code=end

