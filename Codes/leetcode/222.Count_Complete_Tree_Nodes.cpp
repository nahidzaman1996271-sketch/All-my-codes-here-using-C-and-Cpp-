class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == NULL) return 0;
        int leftH = 0;
        int rightH = 0;
        TreeNode* pleft = root;
        TreeNode* pright = root;
        while (pleft != NULL) {
            pleft = pleft->left;
            leftH++;
        }
        while (pright != NULL) {
            pright = pright->right;
            rightH++;
        }
        if (leftH == rightH)
            return (1 << leftH) - 1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};