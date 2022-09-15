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
    push(&head, 20);
    
    unordered_set<int> s;
    Node* curr = head;
    Node* next = curr->next;
    s.insert(head->data);
    while(next){
        if(s.count(next->data)!=0){
            curr->next = next->next;
        }
        else{
            s.insert(curr->data);
            curr = curr->next;
        }
        next = next->next;
    }

    printList(head);

    // In ordered list 
    // curr = head;
    // while(curr && curr->next){
    //     if(curr->data==curr->next->data){
    //         curr->next = curr->next->next;
    //     }
    //     else curr= curr->next;
    // }
    // printList(head);
}