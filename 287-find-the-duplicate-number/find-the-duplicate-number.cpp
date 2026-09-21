class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x : nums){
            mp[x]++;
        }
        int temp=0;
        for(auto x : mp){
            if(x.second >= 2){
                temp = x.first;
            }
        }
        return temp;
    }
};