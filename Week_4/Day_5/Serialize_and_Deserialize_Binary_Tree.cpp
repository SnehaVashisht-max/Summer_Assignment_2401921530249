class Codec {
public:
    // Serialize
    void preorder(TreeNode* root, string &ans) {
        if (root == NULL) {
            ans += "#,";
            return;
        }

        ans += to_string(root->val) + ",";
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    string serialize(TreeNode* root) {
        string ans = "";
        preorder(root, ans);
        return ans;
    }

    // Deserialize
    TreeNode* build(stringstream &ss) {
        string val;
        getline(ss, val, ',');

        if (val == "#")
            return NULL;

        TreeNode* root = new TreeNode(stoi(val));

        root->left = build(ss);
        root->right = build(ss);

        return root;
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return build(ss);
    }
};
