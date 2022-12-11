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

void printLevelOrder(Node* root){
    queue<Node> q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.top();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(5);
    root->left->left = newNode(4);
    printLevelOrder(root);

}