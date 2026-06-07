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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp=head;
        int mid;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
    
        // int n=head->val;
        if(n%2==0){
            mid=(n/2)+1;
        }else{
            mid=(n/2)+1;
        }
        for(int i=0;i<mid-1;i++){
        head=head->next;
        }
        // temp=temp->next;
        return head;
       
        
    }
};