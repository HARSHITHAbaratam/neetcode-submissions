class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(auto& s:strs){
            vector<int> count(26,0);
            for(auto& it:s){
                count[it-'a']++;
            }
            string k=to_string(count[0]);
            for(int i=1;i<26;i++){
                k+=','+to_string(count[i]);
            }
            res[k].push_back(s);
        }vector<vector<string>>result;
        for(auto& it:res){
            result.push_back(it.second);
        }return result;
    }
};
