class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>res;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int summ=nums[i]+nums[j]+nums[k];
                if(summ==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(nums[j]==nums[j-1] && j<k){
                        j++;
                    }
                }else if(summ>0){
                    k--;
                }else{
                    j++;
                }
            }
        }return res;
    }
};
