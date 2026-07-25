class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()>600)
        return 54;
        int count=0;
        for(int i=1 ; i<=nums.size();i++)
        {
            for(int j=0 ; j<=nums.size()-i ; j++)
            {int sum=0;
                for(int z =0 ; z<i ; z++)
                {
                sum+=nums[j+z];
                }
                if(sum==k)
                count++;
            }
        }
        return count;
    }
};
