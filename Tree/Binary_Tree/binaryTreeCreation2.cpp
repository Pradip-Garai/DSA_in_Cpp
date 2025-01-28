//Wap to Implement Binary Tree using Recursion
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
int main(){
  Node *root;
  cout<<"Enter Root Element : ";
  root=binaryTree();
  return 0;
}