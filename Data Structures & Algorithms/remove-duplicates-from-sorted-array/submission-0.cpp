class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,k=0;
        int n=nums.size();
        while(i<n && k<n){
            if(nums[i]==nums[k]){
                i++;
            }else{
                k++;
                swap(nums[i],nums[k]);
                i++;
            }
            
        }return k+1;
    }
};