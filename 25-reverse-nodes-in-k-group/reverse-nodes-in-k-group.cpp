
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count<k){
            return head;
        }
        int len=count%k;
        int groupcount=0;
        while(curr!=NULL && groupcount<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            groupcount++;
        }
        // int len=count%k;
        if(next!=NULL){
            ListNode* rh=reverseKGroup(next,k);
            head->next=rh;
        }
        
        return prev;
    }
};