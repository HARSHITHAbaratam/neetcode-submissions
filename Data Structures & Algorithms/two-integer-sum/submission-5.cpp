class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int comp=target-nums[i];
            if(a.count(comp) && a[comp]!=i){
                return{i,a[comp]};
            }


        }return {};
        
    }
};
