class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
//         int p=people.size()-1;
//         int sum=0,count=0;
//         sort(people.begin(),people.end());
//         for(int i=p-1;i>=0;i--){
//             sum+=people[p];
//             if(i==0 && sum!=0)count++;
//             else if(sum>limit){
//                 sum-=people[i];
//                 count++;
//                 sum=0;
//             }
//             else if(sum==limit){
//                 count++;
//                 sum=0;
//             }
            
            
//         }
//         return count;
        int l=0;
        int r=people.size()-1;
        int boats=0;
        sort(people.begin(),people.end());
        while(l<=r){
            int sum=people[l]+people[r];
            if(sum<=limit){
                l++;
                r--;
            }
            else if(sum>limit){
                r--;
            }
            boats++;
        }
        return boats;
    }
};