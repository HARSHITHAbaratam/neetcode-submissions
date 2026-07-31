class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int maxi=0;
        while(i<j){
            int mini=min(heights[i],heights[j]);
            maxi=max(maxi,abs(i-j)*mini);
            if(heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
        }return maxi;
    }
};
