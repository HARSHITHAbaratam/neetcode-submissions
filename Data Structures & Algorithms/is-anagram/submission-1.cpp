class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.size()) return false;
       unordered_map<char,int>a;
       unordered_map<char,int>b;
       for(int i=0;i<s.length();i++){
        a[s[i]]++;
        b[t[i]]++;
       }
       return a==b;

    }
};
