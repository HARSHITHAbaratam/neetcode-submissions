class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> a;
        for(int i=0;i<numbers.size();i++){
            int tmp=target-numbers[i];
            if(a.find(tmp)!=a.end()){
                return {a[tmp],i+1};
            }a[numbers[i]]=i+1;
        }
        return {};
    }
};
