class Solution {
private:
    bool tree(TreeNode* root, long long minimum, long long maximum) {
        if (!root) 
           return true;
        int curr = root->val;
        if (curr >= maximum || curr<= minimum)
            return false;
        return tree(root->right, curr, maximum) && tree(root->left, minimum, curr);
    }
public:
    bool isValidBST(TreeNode* root) {
        return tree(root,LLONG_MIN, LLONG_MAX);
    }
};
