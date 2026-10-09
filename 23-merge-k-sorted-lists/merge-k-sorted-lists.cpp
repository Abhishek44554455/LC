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
    ListNode* partitionAndMerge(int start,int end,vector<ListNode*>& lists){
        if(start>end){
            return NULL;
        }
        if(start==end){
            return lists[start];
        }
        int mid=start+(end-start)/2;
        ListNode* l1=partitionAndMerge(start,mid,lists);
        ListNode* l2=partitionAndMerge(mid+1,end,lists);
        return mergeTwo(l1,l2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        return partitionAndMerge(0,n-1,lists);
    }
};