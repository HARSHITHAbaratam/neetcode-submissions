class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string st="";
        while(i<word1.size() && j<word2.size()){
            st+=word1[i];
            st+=word2[j];
            i++;j++;
        }
        if(i<word1.size()){
            st.append(word1.begin()+i,word1.end());
        }else if(j<word2.size()){
st.append(word2.begin()+j,word2.end());
        }return st;
    }
};