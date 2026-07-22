class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>a;
        for(int num:nums){
            a[num]++;
            if(a.size()<=2){
                continue;
            }
            unordered_map<int,int>b;
            for(auto it:a){
                if(it.second>1){
                    b[it.first]=it.second-1;
                }
            }
            a=b;
        }
        unordered_map<int,int> freq;

        for(int x : nums){
            if(a.count(x))
                freq[x]++;
        }
        
        vector<int>c;
        for(auto it:freq){
            if(it.second>nums.size()/3){
                c.push_back(it.first);

            }
        }
        return c;
    }
};