#include <iostream>
#include <vector>
#include <algorithm>
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

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << ends;
        node = node->next;
    }
    cout << endl;
}

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

Node *addOneUtil(Node *head)
{
    Node *res = head;
    Node *temp=NULL;

    int carry = 1, sum;

    while (head != NULL)
    {
        sum = carry + head->data;
        carry = sum / 10;
        sum = sum % 10;
        head->data = sum;
        temp = head;
        head = head->next;
    }

    if (carry > 0){
        temp->next = new Node();
        temp->next->data = carry;
    }

    return res;
}

Node *addOne(Node *head)
{
    head = reverse(head);
    head = addOneUtil(head);
    return reverse(head);
}

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    printList(addOne(head));
}
