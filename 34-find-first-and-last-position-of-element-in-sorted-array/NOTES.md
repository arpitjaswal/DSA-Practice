class Solution {
public:
//binary function for first occurence
int firstocc(vector<int>A, int t, int n){
int i=0;
int ans=-1;
int j=A.size()-1;
int mid=i+(j-i)/2;
while(i<j){
if(A[mid]==t)return mid;
else if(A[mid]<t){
i=mid;
}
else if(A[mid]>t){
j=mid-1;
}
mid=i+(j-i)/2;
}
return -1;
}
//binary function for second occurence
int secondocc(vector<int>A, int t, int n){
int i=0;
int ans=-1;
int j=A.size()-1;
int mid=i+(j-i)/2;
while(i<j){
if(A[mid]==t)return mid;
else if(A[mid]<t){
i=mid+1;
}
else if(A[mid]>t){
j=mid;
}
mid=i+(j-i)/2;
}
return -1;
}
vector<int> searchRange(vector<int>& nums, int target) {
//size of the array
int n=nums.size();
//binary search function call twice to find the first and last element
int first=firstocc(nums,target,n);
int second=secondocc(nums,target,n);
//store the solution in a vector and return that same vector
vector<int>ans(2,0);
ans[0]=first;
ans[1]=second;
return ans;
}
};