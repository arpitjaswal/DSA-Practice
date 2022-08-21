class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n,0);
        int hottest=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(hottest<=temperatures[i]){
                hottest=temperatures[i];
            }
            else{
                int it=i+1;
                while(temperatures[it]<=temperatures[i]){
                    it+=ans[it];
                }
                ans[i]=it-i;
            }
        }
        return ans;
    }
};