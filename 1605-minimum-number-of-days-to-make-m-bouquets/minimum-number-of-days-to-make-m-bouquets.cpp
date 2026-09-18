class Solution {
public:
bool possible(vector<int>arr,int day,int m,int k){
    int count=0;
    int posb=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=day){
            count++;
        }else{
            posb+=count/k;
            count=0;
        }
       
    }
     posb+=count/k;
    if(posb>=m){
        return true;
    }
    return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
      long long  n=bloomDay.size();
        if(n<(long long)m*k)return -1;
        for(int i=0;i<n;i++){
            maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);
        }
       int low=mini;
       int high=maxi;
       while(low<high){
        int mid=(low+high)/2;
        if(possible(bloomDay,mid,m,k)==true){
            high=mid;
        }else{
            low=mid+1;
        }
       }
       return low;
    }
};