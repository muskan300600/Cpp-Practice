#include <iostream>
#include <algorithm>
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

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);

    int k;
    cin >> k;
    Node *p = head;
    int ans = -1;
    int i = 0;    

    while (p != 0)
    {
        i++;
        if (i % k == 0)   
            ans = p->data; 
        p = p->next;
    }

    cout<<ans;
}
