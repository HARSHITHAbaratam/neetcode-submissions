class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty()){
            return 0;
        }
        int c=1,k=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                c++;
            }else if(nums[i]==nums[i+1]){
                c=c+0;
            }
            else{
                k=max(c,k);
                c=1;
            }
            
        }return max(c,k);
    }
};
