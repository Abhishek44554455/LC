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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=1;
        ListNode* temp=head;
        if(head==NULL ) return NULL;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }
        ListNode* tail=temp;
        temp=head;
        if(k!=0){
            k=k%len;
        }
        for(int i=1;i<len-k;i++){
            temp=temp->next;
        }
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};