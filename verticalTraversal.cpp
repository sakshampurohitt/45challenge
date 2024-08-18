class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, vector<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;
        vector<vector<int>> ans;
        
        if(root == nullptr) return ans;
        q.push(make_pair(root, make_pair(0, 0)));

        while(!q.empty()) {
            pair<TreeNode*, pair<int, int>> temp = q.front();
            q.pop();

            TreeNode* frontnode = temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;

            nodes[hd][level].push_back(frontnode->val);

            if(frontnode->left) {
                q.push(make_pair(frontnode->left, make_pair(hd-1, level+1)));
            }
            if(frontnode->right) {
                q.push(make_pair(frontnode->right, make_pair(hd+1, level+1)));
            }
        }

        for(auto i: nodes) {
            vector<int> col;
            for(auto j: i.second) {
                sort(j.second.begin(), j.second.end());
                col.insert(col.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(col);
        }

        return ans;
    }
};
