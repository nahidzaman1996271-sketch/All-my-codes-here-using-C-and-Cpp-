class Solution {
public:
    int result = INT_MAX;
    int prev = -1;

    int minDiffInBST(TreeNode* root) {
        minDiffInBSTHelper(root);
        return result;
    }

    void minDiffInBSTHelper(TreeNode* root) {
        if (root == NULL) return;

        minDiffInBSTHelper(root->left);

        if (prev != -1) {
            result = min(result, root->val - prev);
        }

        prev = root->val;

        minDiffInBSTHelper(root->right);
    }
};