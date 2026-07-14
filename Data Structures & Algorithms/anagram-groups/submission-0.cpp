class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> s;
        
        unordered_map<string,vector<string>> abc;
        for(int i =0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            abc[s].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto &it:abc){
            result.push_back(it.second);
        }
        return result;
    }
};
