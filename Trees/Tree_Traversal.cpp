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
	return 0;
}