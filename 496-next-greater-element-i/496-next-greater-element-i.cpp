class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    //     int n1=nums1.size();
    //     int n2=nums2.size();
    //     vector<int>ans;
    //     for(int i=0;i<n1;i++){
    //         for(int j=0;j<n2;j++){
    //         if(nums1[i]==nums2[j]){
    //         int temp=-1;
    //         for(int k=j;k<n2;k++){
    //             if(nums2[k]>nums2[j]){
    //                 temp=nums2[k];
    //                 break;
    //             }
    //           }
    //             ans.push_back(temp);
    //         }
    //     }
    // }
    //     return ans;
        stack<int>s;
        unordered_map<int,int>m;
        for(int i=0;i<nums2.size();i++){
            while(s.size() && s.top()<nums2[i]){
                m[s.top()]=nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        vector<int>ans;
        for(auto x:nums1)
            ans.push_back(m.count(x)?m[x]:-1);
        return ans;
    }
};