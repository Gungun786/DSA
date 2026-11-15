class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        const int MOD = 1e9 + 7;

        vector<long long> prefix(n);
        prefix[0]=arr[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + arr[i];
        }

        long long even = 1;
        long long odd = 0;

        for (int i = 0; i <n; i++) {
            if (prefix[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        return (even * odd) % MOD;
    }
};