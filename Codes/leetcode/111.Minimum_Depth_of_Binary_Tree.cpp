class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return 1;

        int ld = root->left == NULL ? INT_MAX : minDepth(root->left);
        int rd = root->right == NULL ? INT_MAX : minDepth(root->right);
        return min(ld, rd) + 1;
    }
};