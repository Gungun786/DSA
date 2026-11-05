class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1=arr2.size();
        int n2=arr1.size();
        int count=0;
        bool p=false;
        for(int i=0;i<n2;i++){
            for(int j=0;j<n1;j++){
                if(abs(arr1[i]-arr2[j])>d){
                    p=true;
                }else{
                    p=false;
                   break;
                }
            }
            if(p){
                count++;
            }
        }
        return count;
    }
};