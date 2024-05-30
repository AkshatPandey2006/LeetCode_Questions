vector<int> preorderTraversal(TreeNode *root) {
    vector<int> ans;
    if(root != NULL) {
        ans.push_back(root -> val);
        preorderTraversal(root -> left);
        preorderTraversal(root -> right);
    }
    return ans;
}
