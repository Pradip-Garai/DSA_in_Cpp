//Wap to Create a Binary Tree and Perform three Traversal (Preorder,Inorder,Postorder)
#include<iostream>
using namespace std;
class Node{
  public:
   int data;
   Node *left,*right;
   Node(int value){
      data=value;
      left=right=NULL;
   }
};

//binary tree Implementation
Node* binaryTree(){
    int x;
    cin>>x;
    if(x==-1) return NULL;
    Node* temp=new Node(x);
    
    //left child
    cout<<"Enter Left Child of "<<x<<" : ";
    temp->left=binaryTree();
    
    //right child
    cout<<"Enter Right Chlid of "<<x<<" : ";
    temp->right=binaryTree();
    return temp;
}

//Preorder Travversal 
void Preorder(Node *root){
    if(!root) return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

//Inorder Travversal 
void Inorder(Node *root){
   if(!root) return ;
   Inorder(root->left);
   cout<<root->data<<" ";
   Inorder(root->right);
}

//Postorder Travversal 
void Postorder(Node *root){
   if(!root) return;
   Postorder(root->left);
   Postorder(root->right);
   cout<<root->data<<" ";
}

//main part
int main(){
  Node *root;
  cout<<"Enter Root Element : ";
  root=binaryTree();

  //Preorder Traversal
  cout<<"\nPreorder Traversal : ";
  Preorder(root);

  //Inorder Traversal
  cout<<"\nInorder Traversal : ";
  Inorder(root);

  //Postorder Traversal
  cout<<"\nPostorder Traversal : ";
  Postorder(root);
  return 0;
}