#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *left,*right;
	Node(int data){
		this->data=data;
		left=right=NULL;
	}
};
void printInorder(struct Node* node){
	if(node==NULL)return;
	printInorder(node->left);
	cout<<node->data<<" ";
	printInorder(node->right);
}
void printPostorder(struct Node* node){
	if(node==NULL)return;
	printPostorder(node->left);
	printPostorder(node->right);
	cout<<node->data<<" ";
}
void printPreorder(struct Node* node){
	if(node==NULL)return;
	cout<<node->data<<" ";
	printPreorder(node->left);
	printPreorder(node->right);
}
void printLevelOrder(struct Node * node){
    if(node==NULL)return;

    queue<Node *> q;
    q.push(node);
    while(q.empty()==false){
        Node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);

    }
}
void insert(struct Node* node,int key){
    queue<struct Node*> q;
    q.push(node);
    while(!q.empty()){
        struct Node* temp=q.front();
        q.pop();
        if(!temp->left){
            temp->left=new Node(key);
            break;
        }else{
            q.push(temp->left);
        }
        if(!temp->right){
            temp->right=new Node(key);
            break;
        }else{
            q.push(temp->right);
        }


    }
}
struct Node* findLCA(struct Node* root,int n1,int n2){
    if(root==NULL)return NULL;

    if(root->data==n1 || root->data==n2){
        return root;
    }

    struct Node* left_lca=findLCA(root->left,n1,n2);
    struct Node* right_lca=findLCA(root->right,n1,n2);

    if(left_lca && right_lca){
        return root;
    }
    return (left_lca!=NULL)?left_lca:right_lca;
}
void leftViewUtil(Node* root) 
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
            cout<<temp->data<<" ";

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

                temp = q.front(); 
            } 

            // Push delimiter 
            // for the next level 
            q.push(NULL); 
        } 

        // Pop the delimiter of 
        // the previous level 
        q.pop(); 
    } 
} 
void rightViewUtil(Node* root) 
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
int main() {
	// your code goes here
	struct Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	 cout << "Preorder traversal of binary tree is \n";
    printPreorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root); 

    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);

    cout<<"\nLevelorder traversal of binary tree is \n";
    printLevelOrder(root);

    cout<<"\nInserting a new node in a tree \n";
    insert(root,6);
    insert(root,7);

    cout<<"\nLevelorder traversal of binary tree is \n";
    printLevelOrder(root);

     cout << "LCA(4, 5) = " << findLCA(root, 4, 5)->data;
    cout << "nLCA(4, 6) = " << findLCA(root, 4, 6)->data;
    cout << "nLCA(3, 4) = " << findLCA(root, 3, 4)->data;
    cout << "nLCA(2, 4) = " << findLCA(root, 2, 4)->data;
    cout<<endl;
	leftViewUtil(root);
	cout<<endl;
	rightViewUtil(root);
	return 0;
}