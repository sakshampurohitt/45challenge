

/*Structure of the Node of the binary tree is as
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
*/
// function should return the root of the new binary tree formed
Node* util(int n, int pre[], char preLN[], int &index) {
    // Base case: if all nodes are processed, return nullptr
    if (index == n) return nullptr;

    // Create a new node with the current data and increment index
    Node* root = new Node(pre[index]);
    index++;

    // If the current node is a leaf node, return it
    if (preLN[index - 1] == 'L') return root;

    // If the current node is a non-leaf node, construct left and right subtrees
    root->left = util(n, pre, preLN, index);
    root->right = util(n, pre, preLN, index);

    return root;
}

struct Node *constructTree(int n, int pre[], char preLN[]) {
    int index = 0;
    return util(n, pre, preLN, index);
}
