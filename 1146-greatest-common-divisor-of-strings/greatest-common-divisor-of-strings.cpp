
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a = str1.length();
        int b = str2.length();

        for (int i = 0; i < a + b; i++) {
            char c1 = (i < a) ? str1[i] : str2[i - a];
            char c2 = (i < b) ? str2[i] : str1[i - b];

            if (c1 != c2) {
                return "";
            }
        }

        int x = a, y = b;

        while (y != 0) {
            int rem = x % y;
            x = y;
            y = rem;
        }

        return str1.substr(0, x);
    }
};
