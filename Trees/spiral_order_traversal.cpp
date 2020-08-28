int calHeight(Node* root){
    if(root==NULL) return 0;
    int l=calHeight(root->left);
    int r=calHeight(root->right);
    return max(l,r)+1;
    
}
void printGiven(Node* tree,int d,bool ltr){
    if(tree==NULL)return;
    if(d==1){
        cout<<tree->data<<" ";
    }
    else if(d>1){
        if(ltr){
            printGiven(tree->left,d-1,ltr);
            printGiven(tree->right,d-1,ltr);
        }else{
            printGiven(tree->right,d-1,ltr);
            printGiven(tree->left,d-1,ltr);

        }
    }
}
void printSpiral(Node *root)
{
    bool ltr=0;
    int height=calHeight(root);
    for(int i=1;i<=height;i++){
        printGiven(root,i,ltr);
        ltr=!ltr;
    }
    
}