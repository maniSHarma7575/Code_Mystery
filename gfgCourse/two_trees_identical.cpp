bool isIdentical(Node *r1, Node *r2)
{
    if(r1==NULL && r2==NULL) return true;
    else if(r1!=NULL && r2!=NULL){
        bool a=r1->data==r2->data;
        bool b=isIdentical(r1->left,r2->left);
        bool c=isIdentical(r1->right,r2->right);
        
        if(a && b && c)return true;
    }
    return false;
}