vector<int> InorderTraversal(TreeNode *root) {
    vector<int> ans;
    if(root != NULL) {
        InorderTraversal(root -> left);
        ans.push_back(root -> val);
        InorderTraversal(root -> right);
    }
    return ans;
}
