// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector<int> result;
        int size = nums.size();
        for(int i = 0; i < size; i++)
        {
            for(int j = i+1; j < size; j++)
            {
                if(target == nums[i] + nums[j])
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// @lc code=end

