class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]+=1;
        }
        
        priority_queue<pair<int,int>> pq;
        for(auto &it:a){
            pq.push({it.second,it.first});
        }
        vector<int> v;
        for(int j=0;j<k;j++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
