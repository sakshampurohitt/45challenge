class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL) return;
        TreeNode*curr = root;
        while(curr != NULL){
            if(curr->left != NULL){
                // save the right
                TreeNode*r=curr->right;
                curr->right = curr->left;
                // find the predecessor
                TreeNode*pred = curr->left;
                while(pred->right != NULL){
                    pred = pred->right;
                }
                // link
                pred->right = r;
                // proceeding
                curr = curr->left;
            }
            else{
                curr = curr->right;
            }
        }
        TreeNode*temp = root;
        while(temp->right != NULL){
            temp->left=NULL;
            temp=temp->right;
        }
    }
};
