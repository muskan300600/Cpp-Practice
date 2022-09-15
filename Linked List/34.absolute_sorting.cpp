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

Node *sortList(Node *head)
{
    vector<int> v;
    Node *temp =head;
    while (temp)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    sort(v.begin(), v.end());
    temp = head;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        temp->data = v[i];
        temp = temp->next;
    }

    Node *curr1 = head;
    while (curr1 != NULL)
    {
        cout << curr1->data << ends;
        curr1 = curr1->next;
    }
}

int main()
{
    Node *head = NULL;
    push(&head, -1);
    push(&head, -2);
    push(&head, 3);
    push(&head, 4);
    push(&head, -5);

    sortList(head);
}