#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> repeat;
        for (int i = 0; i < nums.size(); i++)
        {
            if (repeat.count(nums[i]))
            {
                ans.push_back(repeat[nums[i]]);
                ans.push_back(i);
                break;
            } //判斷第二個數字有沒有在裡面，有的話放入ans

            repeat[target - nums[i]] = i; //把該數字的位置剩下放入unorderedmap
        }
        return ans;
    }
};