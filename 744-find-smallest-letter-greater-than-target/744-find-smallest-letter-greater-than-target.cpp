class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        //if(letters.back()<=target)return letters.back();
        int start=0;
        int end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(letters[mid]<=target)start=mid+1;
            else
                end=mid;
        }
        return letters[start]>target?letters[start]:letters[0];
        //return letters[start];
    }
};