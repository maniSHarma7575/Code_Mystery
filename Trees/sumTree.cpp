int calSum(Node* node){
    if(node==NULL) return 0;
    return node->data+calSum(node->left)+calSum(node->right);
}
bool isSumTree(Node* root)
{
     if(root==NULL) return true;
     if(root->left==NULL && root->right==NULL) return true;
     if(root->data==(calSum(root->left)+calSum(root->right))){
         return isSumTree(root->left) && isSumTree(root->right);
     }else{
     return false;
     }
}