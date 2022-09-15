#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **ref, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    (*ref) = new_node;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << ends;
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 0);
    push(&head, 2);
    push(&head, 2);
    push(&head, 2);
    push(&head, 0);
    push(&head, 1);
    Node* curr = head;
    int count0=0,count1=0,count2=0;
    while(curr){
        if(curr->data ==0)
            count0++;
        else if(curr->data==1)
            count1++;
        else count2++;
        curr = curr->next;
    }

    curr = head;
    while(count0--){
        curr->data =0;
        curr = curr->next;
    }
    while(count1--){
        curr->data =1;
        curr = curr->next;
    }
    while(count2--){
        curr->data =2;
        curr = curr->next;
    }

    printList(head);
}