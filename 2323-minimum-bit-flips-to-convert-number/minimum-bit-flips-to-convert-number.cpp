class Solution {
public:
long long dectobin(int n){
    long long pow=1;
    long long binnum=0;
    while(n>0){
        long long d=n%10;
        binnum+=d*pow;
        pow=pow*10;
        n/=10;
    }
    return binnum;
 }
    int minBitFlips(int start, int goal) {
        long long p=dectobin(start);
       long long r=dectobin(goal);
       long long s=p^r;
       long long count =0;
       while(s!=0){
     long long d=s%2;
     if(d*2==2){
        count++;
     }
     s=s/2;
       }
       return count;
        
    }
};