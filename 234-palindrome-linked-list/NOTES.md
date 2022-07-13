* class Solution {
private:
bool isPalindromeVector(vector<int>v){
int n=v.size();
int i=0;
int j=n-1;
while(i<=j){
if(v[i]!=v[j])return false;
i++;
j--;
}
return true;
}
public:
bool isPalindrome(ListNode* head) {
vector<int>v;
ListNode* temp=head;
while(temp){
v.push_back(temp->val);
temp=temp->next;
}
return isPalindromeVector(v);
}
};
*