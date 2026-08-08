class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for( int i=0;i<s.size();i++){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                stack.push(s[i]);
            }else if(!stack.empty()){
                char k=stack.top();
                if(k=='[' && s[i]==']' || k=='{' && s[i]=='}' || k=='('&& s[i]==')'){
                    stack.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
        if(!stack.empty()){
            return false;
        }return true;
    }
};
