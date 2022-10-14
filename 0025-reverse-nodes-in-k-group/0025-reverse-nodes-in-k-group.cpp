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
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base condtion: if there is no linked list
        if(!head)return NULL;
        ListNode* checker=head;
        for(int i=0;i<k;i++){
            if(!checker)return head;
            checker=checker->next;
        }
        ListNode* curr=head, *prev=NULL, *next=NULL;
        int count=0;
        while(curr && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(next){
            head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};