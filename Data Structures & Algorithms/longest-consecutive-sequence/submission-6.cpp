class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>a(nums.begin(),nums.end());
        
        int i=0;
        int maxi=0;
        while(i<nums.size()){
            if(a.find(nums[i]-1)==a.end()){
                int k=1;
                while(a.find(nums[i]+k)!=a.end()){
                    k++;
                }
                maxi=max(maxi,k);
            }i++;
        }return maxi;

    }
};
