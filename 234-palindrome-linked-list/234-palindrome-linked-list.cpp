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
private:
    ListNode* getMid(ListNode* head){
        ListNode* fast=head->next, *slow=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    
    ListNode* reverseLL(ListNode* head){
        ListNode *curr=head, *prev=NULL, *next=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* middle=getMid(head);
        ListNode* temp=middle->next;
        middle->next=reverseLL(temp);
        ListNode* head1=head, *head2=middle->next;
        while(head2){
            if(head1->val!=head2->val)return false;
            head1=head1->next;
            head2=head2->next;
        }
        return true;
    }
};