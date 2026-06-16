
class Solution {
public:
    ListNode* reverse(ListNode* l1){
        ListNode* curr=l1;
        ListNode* next=NULL;
        ListNode* prev=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* l1=reverse(list1);
        ListNode* l2=reverse(list2);
       
        ListNode* temp=new ListNode(100);
        ListNode* curr=temp;
        int carry=0;
        while(l1 || l2 || carry ){
            int sum=carry;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            

        }
        return reverse(temp->next);
    }
};