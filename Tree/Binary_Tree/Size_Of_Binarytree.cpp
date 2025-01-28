//Wap to find side of Binary Tree
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
void traversal(Node* root,int &size){
    if(!root) return;
    size++;
    traversal(root->left,size);
    traversal(root->right,size);
}

int getSize(Node* root){
   int size=0;
   traversal(root,size);
   return size;
}

int main(){
  Node *root;
  cout<<"Enter Root Element : ";
  root=binaryTree();

  cout<<"\nSize of Tree : "<<getSize(root);
  return 0;
}