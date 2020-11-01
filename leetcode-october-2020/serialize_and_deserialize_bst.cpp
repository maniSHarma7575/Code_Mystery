/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <string> 
#include<bits/stdc++.h>
class Codec {
public:

    // Encodes a tree to a single string.
    void dfs(TreeNode* root,string &result){
        if(root==NULL){
            return;
        }
        result+=to_string(root->val)+" ";
        dfs(root->left,result);
        dfs(root->right,result);
    }
    string serialize(TreeNode* root) {
        if(root==NULL)return "";
        string result;
        dfs(root,result);
        return result;
    }
    // Decodes your encoded data to tree.
    TreeNode* constructBST(vector<int> result,int start,int end){
        if(start>end)return NULL;
        TreeNode* root=new TreeNode(result[start]);
        int i;
        for(i=start;i<=end;i++){
            if(result[i]>result[start]){
                break;
            }
        }
        root->left=constructBST(result,start+1,i-1);
        root->right=constructBST(result,i,end);
        return root;
    }
    TreeNode* deserialize(string data) {
        if(data==""){
            return NULL;
        }
        vector<int> result;
        istringstream f(data);
        string s;    
        while (getline(f, s, ' ')) {
            result.push_back(stoi(s));
        }
        return constructBST(result,0,result.size()-1);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;