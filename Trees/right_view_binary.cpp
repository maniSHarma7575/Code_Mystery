void rightView(Node *root)
{
      queue<Node*> q;
  
    if (root == NULL) 
        return; 

    q.push(root); 

    q.push(NULL); 

    while (!q.empty()) { 
        Node* temp = q.front(); 
        if (temp) { 
            while (q.front() != NULL) {
                if (temp->left) 
                    q.push(temp->left); 
                if (temp->right) 
                    q.push(temp->right); 
                q.pop(); 
                if(q.front()==NULL){
                	cout<<temp->data<<" ";
                }
                temp = q.front(); 
               
            }            
			 q.push(NULL); 
        } 
        q.pop(); 
    } 
}