class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=0;i<n-1;i++){
           ans.push_back(ans[i]+nums[i+1]);
        }
        return ans;
    }
};