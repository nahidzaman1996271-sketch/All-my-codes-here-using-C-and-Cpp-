class Solution {
public:
    vector<int> ans;
    void post(Node* root){
        if(!root) return;

    //process all children first
    for(Node* nd: root->children) post(nd);
    ans.push_back(root->val);
}
    vector<int> postorder(Node* root) {
        post(root);
        return ans;
    }
};