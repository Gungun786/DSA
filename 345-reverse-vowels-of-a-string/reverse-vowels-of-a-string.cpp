class Solution {
public:
    string reverseVowels(string s) {
        
    int n = s.length();
   /* string vowels = "AEIOUaeiou";
    vector<char> v;

    // collect vowels
    for (char ch : s) {
        if (vowels.find(ch) != string::npos) {
            v.push_back(ch);
        }
    }

    // reverse the collected vowels
    reverse(v.begin(), v.end());

    // replace vowels in original string
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (vowels.find(s[i]) != string::npos) {
            s[i] = v[k++];
        }
    }

    return s;*/
    //two pointer approach;;;;;
    int i=0;
    int j=n-1;
    string vowels = "AEIOUaeiou";
    while(i<j){
     while(i<j&&vowels.find(s[i])==string::npos){
        i++;
     }

      while(i<j&&vowels.find(s[j])==string::npos){
        j--;
     }


     if(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
     }
    
    }
     return s;
}

        
    
};