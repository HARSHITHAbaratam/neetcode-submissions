class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(const string& s:strs){
            res.append(to_string(s.size()));
            res.push_back('#');
            res.append(s);
        }return res;
    }

    vector<string> decode(string s) {
        vector<string> str;
        int i=0;
        
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int l=stoi(s.substr(i,j-i));
            str.push_back(s.substr(j+1,l));
            i=j+l+1;

           
        }
        return str;



    }
};
