class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int m=*max_element(people.begin(),people.end());
        vector<int> count(m+1,0);
        for(int p:people){
            count[p]++;
        }
        int idx=0,l=0;
        while(idx<people.size()){
            while(count[l]==0){
                l++;
            }
            people[idx]=l;
            idx++;
            count[l]--;

        }
        int res=0,i=0,j=people.size()-1;
        while(i<=j){
            int rem=limit-people[j];
            j--;
            res++;
            if(i<=j && people[i]<=rem){
                i++;
                
            }
            
        }return res;

    }
};