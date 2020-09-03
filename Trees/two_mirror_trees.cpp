int areMirror(Node* a, Node* b) {
    if(a==NULL && b==NULL) return true;
    
    if(a==NULL || b==NULL) return false;
    
    return a->data ==b->data && areMirror(a->left,b->right) && areMirror(a->right,b->left);
}