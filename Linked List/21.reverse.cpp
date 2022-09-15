#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
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

void reverse(Node** ref)
    {
        Node* current = (*ref);
        Node *prev = NULL, *next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        (*ref) = prev;
    }

    //     vector<int> v;
    //     Node* curr=(*ref);
    //     while(curr){
    //         v.push_back(curr->data);
    //         curr=curr->next;
    //     }
    //     int i=0;
    //     int j=v.size()-1;
    //     curr=(*ref);
    //     while(j--){
    //         curr->data = v[j];
    //         curr = curr->next;
    //     }
    //     return (*ref);
    // }

void print(Node* head)
    {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    print(head);
    cout<<endl;
    reverse(&head);
    print(head);

}