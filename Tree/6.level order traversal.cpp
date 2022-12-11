#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:
    int data;
    Node* left,* right; 
};

Node* newNode(int data){
    Node* root = new Node;
    root->data = data;
    root->left = root->right = NULL;
    return root;
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    return max(height(root->left),height(root->right))+1;
}

void printLevelOrder(Node* root, int level){
    if(root == NULL){
        return;
    }

    if(level == 1){
        cout<<root->data<<" ";
    }

    else if(level>1){
        printLevelOrder(root->left,level-1);
        printLevelOrder(root->right,level-1);
    }
}

int main(){

    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    int n = height(root);
    for(int i=0;i<n;i++){
        cout<<printLevelOrder(root,i);
    }
}