
int calHeight(Node* node){
    if(node==NULL)return 0;
    
    int lDepth=calHeight(node->left);
    int rDepth=calHeight(node->right);
    
    return max(lDepth,rDepth)+1;
}
/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node) {
    if(node==NULL)return 0;
    
    int lHeight=calHeight(node->left);
    int rHeight=calHeight(node->right);
    return max(lHeight+rHeight+1,max(diameter(node->left),diameter(node->right)));
}