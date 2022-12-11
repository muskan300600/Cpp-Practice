#include <algorithm>
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left, *right;
};

Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int size(Node* root){
    if(root==NULL) return 0;
    int x = size(root->left);
    int y = size(root->right);
    return x+y+1;
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    size(root);
}