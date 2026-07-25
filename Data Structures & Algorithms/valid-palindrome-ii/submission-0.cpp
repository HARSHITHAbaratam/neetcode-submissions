class Solution {
private:
    bool ispal(string s,int i,int j) {
        
        while(i<j){
            
            if(tolower(s[i])!=tolower(s[j])){
                return false;

            }i++;j--;
        }return true;
    }
public:
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            
            if(tolower(s[i])!=tolower(s[j])){
                return ispal(s,i+1,j)||ispal(s,i,j-1);

            }i++;j--;
        }return true;
    }
};