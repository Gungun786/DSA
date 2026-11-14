class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        int n =nums.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int x:nums){
            pq.push(x);
        }
        while(k!=0){
            int smallest=pq.top();
            pq.pop();
            smallest+=1;
            pq.push(smallest);
            k--;
        }
        long long prod=1;
        int mod=1e9+7;
        while(!pq.empty()){
            prod=(prod*pq.top())%mod;
            pq.pop();
        }
        return prod;
    }
};