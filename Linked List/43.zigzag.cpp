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
    push(&head, 11);
    push(&head, 15);
    push(&head, 20);
    push(&head, 5);
    push(&head, 10);

    int count=0;
    Node* curr = head;
    while(curr->next){
        count++;
        if(count%2!=0 && curr->data>curr->next->data){
            swap(curr->data,curr->next->data);
        }
        else if(count%2==0 && curr->data<curr->next->data){
            swap(curr->data,curr->next->data);
        }
        curr = curr->next;
    }
    printList(head);

    // Node* curr = head;
    //    Node* temp1=NULL,*temp2=NULL;
    //    while(curr->next->next->next){
    //        temp2=curr->next->next;
    //        temp1 = curr->next;
    //        curr->next = temp2;
    //        temp1->next=temp2->next;
    //        temp2->next = temp1;
    //        curr=curr->next;
    //    }
    // printList(head);
}
    