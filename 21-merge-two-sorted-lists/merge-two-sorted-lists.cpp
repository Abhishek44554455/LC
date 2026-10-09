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
ListNode* mergeTwo(ListNode* a,ListNode* b){
        if(!a) return b;
        if(!b) return a;
        if(a->val<=b->val){
            a->next=mergeTwo(a->next,b);
            return a;
        }else{
            b->next=mergeTwo(a,b->next);
            return b;
        }
        return NULL;
    }
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        // ListNode* newHead = new ListNode(0);
        // ListNode* c=newHead;
        // while (a != NULL && b != NULL) {
        //     if(a->val<b->val){
        //         ListNode* temp=new ListNode(a->val);
        //         c->next=temp;
        //         c=c->next;
        //         a=a->next;
        //     }else{
        //         ListNode* temp=new ListNode(b->val);
        //         c->next=temp;
        //         c=c->next;
        //         b=b->next;
        //     }
        // }
        // if(a==NULL){
        //     c->next=b;
        // }
        // if(b==NULL){
        //     c->next=a;
        // }
        // return newHead->next;
        return mergeTwo(a,b);
    }
};