#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> inverted_table;
        for (int i = 0; i < nums.size(); i++)
        {
            int v = target - nums[i];
            auto finder = inverted_table.find(v);
            if (finder != inverted_table.end())
            {
                return vector<int>{finder->second, i};
            }
            inverted_table[nums[i]] = i;
        }

        return vector<int>{};
    }
};
