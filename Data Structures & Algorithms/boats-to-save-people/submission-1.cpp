class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n= people.size();
        int i=0,j=n-1,c=0;
        while(i<=j){
            if(people[i]==limit){
               c+=1;
               i++;
            }else if(people[j]==limit){
                c+=1;
                j--;
            }else if(people[i]+people[j]>limit){
                c++;
                j--;
            }
            else{
                c+=1;
                i++;
                j--;
            }
        }return c;
        
    }
};