#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

bool isHeap(struct Node* root){
    if(!root || (!root->left && !root->right)) return true;
    else if (root->right && !root->left)
        return false;
    else if (root->right && root->right->left && !root->left->right)
        return false;
    if (root->left->data > root->data)
        return false;    
    if (root->right && root->right->data > root->data)
        return false;
    return isHeap(root->left) && isHeap(root->right);
}

int main(){

}