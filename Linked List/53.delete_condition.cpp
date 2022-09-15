#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*ref);
    (*ref) = new_node;
}

void printList(Node **node)
{
    while (*node != NULL)
    {
        cout << (*node)->data << ends;
        *node = (*node)->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 6);
    push(&head, 7);

    Node *curr = head;
    int M;
    cin >> M;
    int N;
    cin >> N;
    while(curr){
        for(int i=1;i<M && curr;i++){
            curr = curr->next;
        }
        if(curr==NULL) printList(&head); 
        Node* temp = curr;
        for(int j=0;j<=N && temp;j++){
            temp = temp->next;
        }
        curr->next = temp;
        curr=temp;
    }
    printList(&head);
}
