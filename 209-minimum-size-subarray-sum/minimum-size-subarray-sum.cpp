class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int ans=INT_MAX;
        int l=0;
        int sum=0;
        
        for(int h=0;h<n;h++){
            sum+=nums[h];
            int len =h-l+1;
        
            while(sum>=target){

               sum=sum-nums[l];
                ////correct condition write here ;
                len=h-l+1;
                l++;
                ans=min(ans,len);
               
                
            }
         
            
            
        }
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
        
       
        
    }
};