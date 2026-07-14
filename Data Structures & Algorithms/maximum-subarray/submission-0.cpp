class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
       int  cur=0;
        for(int num:nums){
            if(cur<0){
                cur=0;
            }
            cur+=num;
            maxi=max(cur,maxi);
        }return maxi;

    }
};
