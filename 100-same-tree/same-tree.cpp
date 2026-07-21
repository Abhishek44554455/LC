class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        else if (p == NULL || q == NULL) {
            return false;
        } else if (p->val != q->val) {
            return false;
        }

        bool lst = isSameTree(p->left, q->left);
        bool rst = isSameTree(p->right, q->right);
        if (lst == true && rst == true) {
            return true;
        } else {
            return false;
        }
    }
}

;