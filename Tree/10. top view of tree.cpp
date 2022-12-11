#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
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

vector<int> topView(Node* root){
    vector<int> ans;
    if(root==NULL) return ans;
    map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push(root,0);
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        Node* node = it.first;
        int line = it.second;
        if(m.find(line)==m.end()) m[line]=node->data;

        if(node->left!=NULL){
            q.push({node->left,line-1});
        }

        if(node->right!=NULL){
            q.push({node->right,line+1});
        }        
    }

    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
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