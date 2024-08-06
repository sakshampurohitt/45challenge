class Solution {
public:
    void dfs(TreeNode* root, vector<string>& ans, string temp) {
        if (!root) return; 

        
        temp += to_string(root->val);
        
        
        if (!root->left && !root->right) {
            ans.push_back(temp);
        } else {
            
            temp += "->";
            dfs(root->left, ans, temp);
            dfs(root->right, ans, temp);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp = "";
        dfs(root, ans, temp);
        return ans;
    }
};
