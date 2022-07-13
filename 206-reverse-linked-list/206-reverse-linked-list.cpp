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
    ListNode* rev(ListNode* head){
        if(head->next==NULL)return head;
        ListNode* temp=rev(head->next);
        head->next->next=head;
        head->next=NULL;
        return temp;
    }
public:
    ListNode* reverseList(ListNode* head) {
//         //base case: if the head points to null or no other node
//         if(head==NULL)return NULL;
        
//         ListNode* p=NULL, *c=head, *n=c->next;
//         while(c!=NULL){
//             c->next=p;
//             p=c;
//             c=n;
//             if(n!=NULL)n=n->next;
//         }
//         return p;
        
        if(head==NULL)return NULL;
        return rev(head);
    }
};