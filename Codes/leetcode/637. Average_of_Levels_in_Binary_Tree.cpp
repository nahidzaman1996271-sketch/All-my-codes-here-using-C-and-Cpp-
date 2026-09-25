class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        if (!root)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            double sum = 0;

            for (int i = size; i > 0; i--) {
                auto front = q.front();
                q.pop();

                sum += front->val;

                if (front->left)
                    q.push(front->left);

                if (front->right)
                    q.push(front->right);
            }

            ans.push_back(sum / size);
        }

        return ans;
    }
};