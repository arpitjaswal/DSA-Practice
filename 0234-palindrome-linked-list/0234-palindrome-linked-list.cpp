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
    ListNode* getMid(ListNode* h){
        ListNode* f=h->next, *s=h;
        while(f && f->next){
            f=f->next->next;
            s=s->next;
        }
        return s;
    }
    ListNode* isReverse(ListNode* h){
        ListNode* c=h, *p=NULL, *n=NULL;
        while(c){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* mid=getMid(head);
        ListNode* temp=mid->next;
        mid->next=isReverse(temp);
        ListNode* head1=head, *head2=mid->next;
        while(head2){
            if(head1->val!=head2->val)return false;
            head1=head1->next;
            head2=head2->next;
        }
        return true;
    }
};