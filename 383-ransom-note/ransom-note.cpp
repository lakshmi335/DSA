class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(auto x:magazine){
            mp[x]++;
        }
        for(auto r: ransomNote){
            if(mp[r]==0){
                return false;
            }
            mp[r]--;
        }        
        return true;
    }
};