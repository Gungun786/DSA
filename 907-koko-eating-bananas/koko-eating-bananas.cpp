class Solution {
public:
int hourly(vector<int>arr,int h){
    int totalhour=0;
    for(int i=0;i<arr.size();i++){
        totalhour+=ceil(double(arr[i])/double(h));
    }
    return totalhour;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxs=0;
        for(int i=0;i<n;i++){
            maxs=max(maxs,piles[i]);
        }
        int low=1;
        int high=maxs;
        while(low<high){
            int mid=(low+high)/2;
            int totalh=hourly(piles,mid);
            if(totalh<=h){
              
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};