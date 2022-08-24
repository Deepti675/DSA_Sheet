https://leetcode.com/problems/maximum-product-subarray/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int c_max=nums[0];
         int c_min=nums[0];
         int res=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)
                swap(c_max,c_min);
            c_max=max(nums[i],c_max*nums[i]);
            c_min=min(nums[i],c_min*nums[i]);
            res=max(res,c_max);
        }
        return res;
    }
};
