class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n),right(n),ans(n);
        
        
        int i,j,k;
        left[0]=1;
        right[n-1]=1;
        
        for( j=1;j<n;j++){
            left[j]=left[j-1]*nums[j-1];

        }
        for( k=n-2;k>=0;k--){
            right[k]=right[k+1]*nums[k+1];

        }
        for(i=0;i<n;i++){
            ans[i]=right[i]*left[i];
        }
            

        return ans;

    }
};
