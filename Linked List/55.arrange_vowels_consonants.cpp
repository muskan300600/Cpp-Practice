#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

class Node
{
public:
    char data;
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

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;

    return false;
}

int main()
{
    Node *head = NULL;
    push(&head, 'a');
    push(&head, 'i');
    push(&head, 'j');
    push(&head, 'm');
    push(&head, 'o');
    push(&head, 'z');
    Node *temp = head;

    vector<char> v;

    while (temp != NULL)
    {
        if (isVowel(temp->data) == true)
        {
            v.push_back(temp->data);
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (isVowel(temp->data) == false)
        {
            v.push_back(temp->data);
        }
        temp = temp->next;
    }
    temp = head;
    int j = 0;
    while (j < v.size())
    {
        temp->data = v[j];
        j++;
        temp = temp->next;
    }
    printList(&head);
}