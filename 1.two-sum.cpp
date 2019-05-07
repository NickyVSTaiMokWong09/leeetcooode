#include<vector>
#include<unordered_map>
using std::vector;
using std::unordered_map;
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> inverted_table;
        for (int i = 0; i < nums.size(); i++) 
        {
            inverted_table[nums[i]] = i;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            auto range = inverted_table.equal_range(complement);
            for (auto iter = range.first; iter != range.second; iter++)
            {
                if (iter->second != i)
                {
                    return vector<int>{i, iter->second};
                }
                
            }
        }
        
        return vector<int>{};
    }
};

