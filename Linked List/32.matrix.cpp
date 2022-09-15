#include <iostream>
#include <algorithm>
#include <math.h>
#define MAX 20
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node* down;
};

Node* constructLinkedMatrix(int arr[MAX][MAX], int n)
{
    Node* head = new Node();
    head->data = arr[0][0];
        Node* temp = head;
        for (int i = 1; i < n; i++){
            Node* node = new Node();
            node->data = arr[0][i];
            temp->right = node;
            temp = temp->right;
        }
        Node* firstNode = head; 
        int i = 1,j;
        while (i != n){
            j = 0;
            temp = firstNode;
            Node* prev = NULL;
            while (temp != NULL){
                Node* node = new Node();
                node->data = arr[i][j];
                temp->down = node ;
                if (j == 0){
                    prev = node;
                    j++;
                    temp = temp->right;
                    continue;
                }
                prev->right = node;
                temp = temp->right ;
                prev = node;
                j++;
            }
            
            firstNode = firstNode->down;
            i++;
        }
       
     return head;  
}

int main(){
    
}