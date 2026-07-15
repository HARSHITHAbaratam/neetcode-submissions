class Solution {
public:
    int partition(vector<int>& nums,int low,int high){
        int pivot=nums[high];
        int i=low-1;
        for(int j=low;j<high;j++){
            if(nums[j]<=pivot){
                i++;
                swap(nums[i],nums[j]);
            }
        }swap(nums[i+1],nums[high]);
        return i+1;
    }
    void QS(vector<int>& nums,int low,int high){
        if(low<high){
            int pi=partition(nums,low,high);
            QS(nums,low,pi-1);
            QS(nums,pi+1,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        QS(nums,low,high);
        return nums;
    }
};