class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
       for(int i=1;i<=n;i++){
        int count=0;
        int num=i;
         while(num!=0){
         num=num&(num-1);
           count++;
         }
         ans.push_back(count);

       }
       return ans; 
    }
};
// this approach uses tc=0(n logn);