void countTraversal(Node* root,int& count){
     if(root==NULL){
      return;
  }
  queue<Node*> q;
  q.push(root);
  while(!q.empty()){
      struct Node* temp=q.front();
      q.pop();
      if(temp->left==NULL && temp->right==NULL){
          count++;
      }
      countTraversal(temp->left,count);
      countTraversal(temp->right,count);
  }
}
int countLeaves(Node* root)
{
 int count=0;
 countTraversal(root,count);
 return count;
}
