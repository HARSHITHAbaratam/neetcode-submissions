class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs.size();i++){
            s+=to_string(strs[i].size())+"#"+strs[i];
        }return s;

    }

    vector<string> decode(string s) {
        vector<string> str;
        int i=0;
        
        while(i<s.size()){
            int f= s.find("#",i);
            int l=stoi(s.substr(i,f-i));
            string a=s.substr(f+1,l);
            str.push_back(a);
            i=f+1+l;
           
        }
        return str;



    }
};
