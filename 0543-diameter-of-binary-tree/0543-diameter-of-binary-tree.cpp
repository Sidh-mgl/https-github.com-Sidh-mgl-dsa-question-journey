class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        return max(lh , rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int leftd = diameterOfBinaryTree(root->left);
        int rightd = diameterOfBinaryTree(root->right);
        int currd = height(root->left) + height(root->right);

        return max(currd , max(leftd , rightd));

    }
};