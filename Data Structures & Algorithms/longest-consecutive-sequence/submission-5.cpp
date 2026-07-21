class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>a;
        int res=0;
        for(int num:nums){
            if(!a[num]){
                a[num]=a[num-1]+a[num+1]+1;
                a[num-a[num-1]]=a[num];
                a[num+a[num+1]]=a[num];
                res=max(res,a[num]);
            }
            //res=max(res,a[num]);
        }
        return res;
    }
};
