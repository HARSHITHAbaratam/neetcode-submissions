class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()){
            return false;
        }
        int i=0;
        int k;
        int j;
        for (i=0;i<s.size();i++){
            bool found =false;
            for (j=0;j<t.size();j++){
                if( s[i]==t[j]){
                    t.erase(j,1);
                    found=true;
                    break;
                }
            }if (!found) return false;
            

        }return true;
        
    }
};
