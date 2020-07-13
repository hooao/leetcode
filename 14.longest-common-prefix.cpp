/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string resultString;
        if(strs.size() == 0)
            return resultString;
        int minStrLength = strs.begin()->size();

        //Let's get the shorest string lenght.
        for(auto str=strs.begin(); str != strs.end(); str++)
            minStrLength = (minStrLength > str->size())?(str->size()):(minStrLength);
        //walk through all strs.
        for(int i = 0; i < minStrLength; i++)
        {
            auto str = strs.begin();
            char ch = str->at(i);
            for(; str != strs.end(); str++)
            {
                if(str->at(i) != ch)
                {
                    break;
                }
            }
            if(str == strs.end())
            {
                //candidate character.
                resultString.append(1, ch);
            }
            else//which means a none equal is detected.
                break;
        }
        return resultString;
    }
};
// @lc code=end

