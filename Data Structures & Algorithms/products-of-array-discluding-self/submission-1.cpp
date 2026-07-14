class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);
        
        
        int i,j,k,r=1;
        left[0]=1;
        r=1;
        
        for( j=1;j<n;j++){
            left[j]=left[j-1]*nums[j-1];

        }
        for( k=n-1;k>=0;k--){
            left[k]=left[k]*r;
            r=r*nums[k];

        }
        
            

        return left;

    }
};
