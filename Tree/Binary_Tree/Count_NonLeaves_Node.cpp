//Wap to Count Non-Leave node from tree
#include<iostream>
#include<queue>
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


//count leaves node
int countLeaves(Node* root){
   queue<Node*>q;
   int count=0;
   q.push(root);
   Node* temp;
   while(!q.empty()){
      temp=q.front();
      q.pop();

      if(temp->left)
        q.push(temp->left);
      if(temp->right)
        q.push(temp->right) ;
      if((temp->left && temp->right) || temp->left || temp->right)
        count++;
   };
   return count;
}
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

  cout<<"Total Number of Non-Leave Nodes are : "<<countLeaves(root);
  return 0;
}