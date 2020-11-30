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
    bool flag=false;
    int minDepth(TreeNode* root) {
        if(root==NULL) return flag?INT_MAX:0;
        flag=true;
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        int lHeight=minDepth(root->left);
        int rHeight=minDepth(root->right);
        int maxDepth=min(lHeight,rHeight)+1;
        return maxDepth;
    }
};