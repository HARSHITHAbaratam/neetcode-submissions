class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        set<int> s(nums.begin(),nums.end());
        if(s.size()==1){
            if(*s.begin()==val){
                return 0;
            }
        }
        int i=0,j=nums.size()-1,k=0;
        while(i<j && i<nums.size() && j>=0){
            if(nums[j]==val){
                j--;
                k++;
            }
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                k++;
                j--;
                

            }i++;
            
            
        }
        return nums.size()-k;
    }
};