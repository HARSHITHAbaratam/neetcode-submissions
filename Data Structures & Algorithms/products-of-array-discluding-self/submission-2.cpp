class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,1);
        
        
        int j,k,r=1;
        
        
        
        for( j=0;j<n;j++){
            left[j]=left[j]*r;
            r=r*nums[j];
        }r=1;
        for( k=n-1;k>=0;k--){
            left[k]=left[k]*r;
            r=r*nums[k];

        }
        
            

        return left;

    }
};
