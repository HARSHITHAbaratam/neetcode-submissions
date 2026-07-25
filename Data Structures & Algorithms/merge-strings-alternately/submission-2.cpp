class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        string s;
        for(int i=0;i<n||i<m;i++){
            if(i<n){
                s+=word1[i];
            }
            if(i<m){
                s+=word2[i];
            }
        }return s;

    }
};