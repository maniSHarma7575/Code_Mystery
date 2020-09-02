void kthLargestNode(Node* root,int k,int &max,int &c){
    if(root==NULL || c>=k){
        return;
    }
    kthLargestNode(root->right,k,max,c);
    c++;
    if(c==k){
        max=root->data;
        return;
    }
    kthLargestNode(root->left,k,max,c);
    
}
int kthLargest(Node *root, int K)
{
    int max=0;
    int c=0;
    kthLargestNode(root,K,max,c);
    return max;
}