//Wap to perform Level Order Traversal
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

Node* binaryTree(){
    int x;
    cin>>x;
    if(x==-1) return NULL;
    Node* temp=new Node(x);

    //left child 
    cout<<"Enter Left child of "<<x<<" : ";
    temp->left=binaryTree();

    //right child
    cout<<"Enter Right child of "<<x<<" : ";
    temp->right=binaryTree();
    return temp;
}

void display(vector<int>v){
    cout<<"\nLevel Order traversal : ";
    for(auto i:v)
      cout<<i<<" ";
    cout<<"\n\n";
}

void levelOrder(Node *root){
    vector<int>ans;
    queue<Node*>q;
    q.push(root);
    Node* temp;

    // traversal 
    while(!q.empty()){
        temp=q.front();
        q.pop();

        ans.push_back(temp->data);

        //left child
        if(temp->left)
           q.push(temp->left);
        
        //right child
        if(temp->right)
           q.push(temp->right);
    };

    display(ans);
}

int main(){
    Node* root;
    
    //root
    cout<<"Enter Root Element : ";
    root=binaryTree();

    //Level Order traversal 
    levelOrder(root);
    return 0;
}