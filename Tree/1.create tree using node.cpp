#include <algorithm>
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left, right;

    Node(int val){
        date = val;
        left = NULL;
        right = NULL;
    }
};

static Node createTree() {
		
		Node* root = NULL;
		cout<<"Enter data: ";
		int data;
        cin<<data;
		
		if(data == -1) return ;
		
		root = new Node(data);
		
		cout<<"Enter left for "<<data;
		root->left = createTree();
		
		cout<<"Enter right for "<<data;
		root->right = createTree();
		
		return root;
}
