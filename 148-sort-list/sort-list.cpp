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
    ListNode* merge(ListNode* a, ListNode* b){
        
        ListNode* c=new ListNode(100);
        ListNode* tempC=c;
        while(a!=NULL && b!=NULL){

            if(a->val<b->val){
                tempC->next=a;
                tempC=tempC->next;
                a=a->next;
            }else{
                tempC->next=b;
                tempC=tempC->next;
                b=b->next;
            }
        }
        if(a==NULL){
            tempC->next=b;
        }else{
            tempC->next=a;
        }
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL || head->next==NULL) return head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=head;
        ListNode* b=slow->next;
        slow->next=NULL;
        a=sortList(a);
        b=sortList(b);
        ListNode* c=merge(a,b);
        return c;
        

    }
};