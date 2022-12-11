#include <algorithm>
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left,*right;
};

Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    inOrder(root->left);
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    inOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
}