class Solution {
public:
    set<int> st;

    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        st.insert(root->val);
        inorder(root->right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        vector<int> vc;
        for(int x:st) vc.push_back(x);
        sort(vc.begin(), vc.end());
        if(vc.size()>=2){
            return vc[1];
        }
        return -1;
    }
};