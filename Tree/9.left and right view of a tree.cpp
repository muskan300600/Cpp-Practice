#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node* left,*right;
}

Node* newNode(int data){
    Node* root = new Node;
    root->data = data;
    root->left=root->right=NULL;
    return root;
}

void function(Node* root,int level,vector<int> res){
    if(root==NULL) return;
    if(res.size()==level) res.push_back(root->data);
    function(root->left,level+1,res);
    function(root->right,level+1,res);
}

vector<int> leftView(Node* root){
    vector<int> res;
    function(root,0,res);
    return res;
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(5);
    root->left->left = newNode(4);

    vector<int> res;
    
    res = leftView(root);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}