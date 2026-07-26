class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>a;
        int k=0,i=0,maxi=0;
        while(k<s.size()){
            if(a.find(s[k])==a.end()){
                a.insert(s[k]);
                maxi=max(k-i+1,maxi);
                k++;
                
            }else{
                a.erase(s[i]);
                i++;
            }
        }return maxi;
    }
};
