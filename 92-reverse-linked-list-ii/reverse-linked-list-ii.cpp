
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        while(left<right){
            ListNode *Left=head;
        ListNode *Right=head;
            for(int i=1;i<left;i++){
                Left=Left->next;
            }
            for(int i=1;i<right;i++){
                Right=Right->next;
            }
           
            int temp=Left->val;
            Left->val=Right->val;
            Right->val=temp;
             left++,right--;
        }
        return head;
    }
};