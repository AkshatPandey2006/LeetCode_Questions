vector<int> PostOrderTraversal(TreeNode *root) {
    vector<int> ans;
    if(root != NULL) {
        PostOrderTraversal(root -> left);
        PostOrderTraversal(root -> right);
        ans.push_back(root -> val);
    }
    return ans;
}
