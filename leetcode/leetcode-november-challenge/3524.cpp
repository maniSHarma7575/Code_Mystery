/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findT(TreeNode* root, int& sum){
        if(!root) return 0; 
        int x = findT(root->left, sum);
        int y = findT(root->right, sum);
        sum += abs(x-y);
        return x + y + root->val;
    }
    int findTilt(TreeNode* root) {
        int sum = 0; 
        findT(root, sum);
        return sum;
    }
};