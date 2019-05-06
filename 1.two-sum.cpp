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
        
        for (auto &i : inverted_table)
        {
            auto finder = inverted_table.find(target - i.first);
            if (finder != inverted_table.end())
            {
                return vector<int>{i.second, finder->second};
            }
            
        }
        return vector<int>{};
    }
};

