class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>a;
        int l=0;
        for(int r=0;r<nums.size();r++){
            if(r-l>k){
                a.erase(nums[l]);
                l++;
            }
            if(a.find(nums[r])!=a.end()){
                return true;
            }a.insert(nums[r]);
        }return false;
    }
};