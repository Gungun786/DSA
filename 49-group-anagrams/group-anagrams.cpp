class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>mp;
       for(auto s:strs){
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        string key="";
        for(int i=0;i<26;i++){
            key+=to_string(freq[i])+"#";

        }
        mp[key].push_back(s);
       }
       vector<vector<string>>result;
       for(auto x:mp){
        result.push_back(x.second);
       }
       return result;
        
    }
};