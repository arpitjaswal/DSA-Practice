class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>l2r(ratings.size(),1);
        vector<int>r2l(ratings.size(),1);
        //vector<int>ans(ratings.size(),0);
        for(int i=1;i<l2r.size();i++){
            if(ratings[i]>ratings[i-1])l2r[i]=l2r[i-1]+1;
        }
        for(int i=r2l.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])r2l[i]=r2l[i+1]+1;
        }
        int sum=0;
        for(int i=0;i<ratings.size();i++){
            sum+=max(l2r[i],r2l[i]);
            //sum+=ans[i];
        }
        return sum;
    }
};