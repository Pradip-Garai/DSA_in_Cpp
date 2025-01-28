//Wap to find Sum of Binary Tree
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
void traversal(Node* root,int &sum){
    if(!root) return;
    sum+=root->data;
    traversal(root->left,sum);
    traversal(root->right,sum);
}

int getSum(Node* root){
   int sum=0;
   traversal(root,sum);
   return sum;
}

int main(){
  Node *root;
  cout<<"Enter Root Element : ";
  root=binaryTree();

  cout<<"\nSum of Trees : "<<getSum(root);
  return 0;
}