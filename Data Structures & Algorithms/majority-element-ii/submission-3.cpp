class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        vector<int>b;
        for(auto it:a){
            if(it.second>nums.size()/3){
                b.push_back(it.first);
            }
        }return b;
    }
};