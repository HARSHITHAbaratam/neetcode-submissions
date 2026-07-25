class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prefix;
        prefix[0]=1;
        int cursum=0,res=0;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];
            int sum=cursum-k;
            
            res+=prefix[sum];
            prefix[cursum]++;
        }
        return res;
    }
};