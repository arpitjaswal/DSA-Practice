/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* temp=head;
        while(temp){
            l++;
            temp=temp->next;
        }
        temp=head;
        if(l==n)return head->next;
        int x=l-n-1;
        while(x--){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};