bool hasPathSum(Node *node, int sum) {
    if(node==NULL) return false;
    else{
        int ans=0;
        int sub=sum- node->data;
        if(sub==0 && node->left==NULL && node->right==NULL){
            return 1;
        }
        if(node->left){
            ans=ans||hasPathSum(node->left,sub);
        }
        if(node->right){
            ans=ans||hasPathSum(node->right,sub);
        }
        return ans;
    }
}