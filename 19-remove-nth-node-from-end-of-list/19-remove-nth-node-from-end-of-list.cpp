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
    //take two pointers: fast and slow
        ListNode* fast=head, * slow=head;
    //iterate the fast pointer on n nodes, hence, making it point to the nth node
        while(n--)
            fast=fast->next;
        //check if fast pointer has already reached the end of the LL, delete head cz head is the nth node from the end
        if(!fast)return head->next;
        //now, slow is at the head of the linked list and and fast is at the nth node, now, keep moving both pointers till fast reaches the end of the LL
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        //delete the node next to slow cz it is the (N-n)the from the beginning and nth from the end
        slow->next=slow->next->next;
        //return newly formed linked list
        return head;
    }
};