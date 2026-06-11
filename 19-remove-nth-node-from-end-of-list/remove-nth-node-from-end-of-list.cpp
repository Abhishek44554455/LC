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
        //Brute force 2Pass Solution
    //     ListNode* temp=head;
    //     int len=0;
    //     while(temp!=NULL){
    //         len++;
    //         temp=temp->next;
    //     }
    //     temp=head;
    //     if(n==len){
    //         head=head->next;
    //         return head;
    //     }
    //     for(int i=0;i<len-n-1;i++){
    //         temp=temp->next;
    //     }
    //     temp->next=temp->next->next;
    //     return head;

        //optimal with single pass solution
        ListNode* fast=head;
        ListNode* slow=head;
        for(int i=1;i<=n+1;i++){
            if(fast==NULL){
                return head->next;
            }
            fast=fast->next;
        }
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
     }
};