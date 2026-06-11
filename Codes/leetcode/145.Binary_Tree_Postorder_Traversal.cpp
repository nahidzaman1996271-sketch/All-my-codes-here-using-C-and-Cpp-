class Solution {
public:
    void pot(vector<int> &ans,TreeNode* root){
        if(root == NULL){
            return;
        }
        pot(ans, root->left);
        pot(ans, root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        pot(ans,root);
        return ans;
    }
};