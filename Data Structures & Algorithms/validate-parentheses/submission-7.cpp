class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        char k;
        for( int i=0;i<s.size();i++){
            if(stack.empty()) k='.';
            else k=stack.top();
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                stack.push(s[i]);
            }else if(k=='[' && s[i]==']' || k=='{' && s[i]=='}' || k=='('&& s[i]==')'){
               
                   stack.pop();
                
            }else{
                return false;
            }
        }
        return stack.empty();
    }
};
