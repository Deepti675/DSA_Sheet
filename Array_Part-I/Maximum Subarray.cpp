https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int in_max=nums[0];
        int new_max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            new_max=max(nums[i],new_max+nums[i]);
            in_max=max(in_max,new_max);
        }
        return in_max;
    }
};
