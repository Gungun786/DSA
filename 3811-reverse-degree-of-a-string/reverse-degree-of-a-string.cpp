class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            // position in reversed alphabet
            int revPos = 26 - (s[i] - 'a');  
            // position in string (1-indexed)
            int strPos = i + 1;              
            sum += revPos * strPos;
        }

        return sum;
    }
};
