class Solution {
public:
    vector<int> r;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr)
            return {};
        inorderTraversal(root->left);
        r.push_back(root->val);
        inorderTraversal(root->right);

        return r;
    }
};