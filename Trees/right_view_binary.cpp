void rightView(Node *root)
{
   
      // Declare a queue for Level order Traversal
      queue<Node*> q;
  
    if (root == NULL) 
        return; 

    // Push root 
    q.push(root); 

    // Delimiter 
    q.push(NULL); 

    while (!q.empty()) { 
        Node* temp = q.front(); 
        if (temp) { 

            // Prints first node 
            // of each level 

            // Push children of all nodes at 
            // current level 
            while (q.front() != NULL) { 

                // If left child is present 
                // push into queue 
                if (temp->left) 
                    q.push(temp->left); 

                // If right child is present 
                // push into queue 
                if (temp->right) 
                    q.push(temp->right); 

                // Pop the current node 
                q.pop(); 
                if(q.front()==NULL){
                	cout<<temp->data<<" ";
                }
                temp = q.front(); 
               
            } 
            
			 q.push(NULL); 

            // Push delimiter 
            // for the next level 
           
        } 

        // Pop the delimiter of 
        // the previous level 
        q.pop(); 
    } 
}