//Wap to implement binary tree
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

int main(){
  queue<Node*>q;
  int RootValue,LeftValue,RightValue;
  cout<<"Enter Root Element : ";
  cin>>RootValue;
  Node *root=new Node(RootValue);
  q.push(root);

  //tree creation
  while(!q.empty()){
    Node *temp=q.front();
    q.pop();

    //left child 
    cout<<"Enter Left Child of "<<temp->data<<" : ";
    cin>>LeftValue;
    if(LeftValue!=-1){
       temp->left=new Node(LeftValue);
       q.push(temp->left);
    }

   //Right child 
    cout<<"Enter Right Child of "<<temp->data<<" : ";
    cin>>RightValue;
    if(RightValue!=-1){
       temp->right=new Node(RightValue);
       q.push(temp->right);
    }
    
  }  
}