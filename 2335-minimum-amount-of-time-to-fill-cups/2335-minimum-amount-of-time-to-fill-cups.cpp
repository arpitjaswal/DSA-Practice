class Solution {
    int count=0;
private:
    int checker(vector<int>& amount){
        if(amount[0]+amount[1]+amount[2]==0)return count;
        int n=amount.size();
        sort(amount.begin(), amount.end());
            if(amount[1] && amount[2]){
                amount[1]--;
                amount[2]--;
                count++;
            }
            else{
                count+=amount[2];
                amount[2]=0;
            }
        return checker(amount);
    }
public:
    int fillCups(vector<int>& amount) {
        return checker(amount);
    }
};