class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans; // Correct type for the return value
        if (root == nullptr) return ans;

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> temp(size);
            for (int i = 0; i < size; i++) {
                TreeNode* frontnode = q.front();
                q.pop();
                
               
                int index = leftToRight ? i : size - 1 - i;
                temp[index] = frontnode->val;

                // Add child nodes to the queue
                if (frontnode->left) {
                    q.push(frontnode->left);
                }
                if (frontnode->right) {
                    q.push(frontnode->right);
                }
            }
            
            
            leftToRight = !leftToRight;

            
            ans.push_back(temp);
        }

        return ans;
    }
};
