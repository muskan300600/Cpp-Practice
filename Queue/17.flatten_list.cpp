#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* down;
 
    Node(int d)
    {
        data = d;
        next = down = NULL;
    }
};

// void printOriginalList(Node* head)
// {
//     if (head == NULL) {
//         return;
//     }
 
//     cout << ' ' << head->data << ' ';
 
//     if (head->down)
//     {
//         cout << "[";
//         printOriginalList(head->down);
//         cout << "]";
//     }
 
//     printOriginalList(head->next);
// }
 
void printFlatenedList(Node* head)
{
    while (head)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
 
    cout << "null" << '\n';
}
 
Node* flattenList(Node* head)
{
  
    if (head == NULL) {
        return NULL;
    }
    Node* curr=head;
    queue<Node*>q;
    while(curr){
        if(curr->down!=NULL){
            q.push(curr->down);
        }

        if(curr->next==NULL){
            curr->next=q.front();
            q.pop();
        }

        curr=curr->next;
    }
    return head;
}
 
// Node* mergeList(Node* a,Node* b){
//     Node* temp = new Node(0);
//     Node* head=temp;
//     while(a&&b){
//         if(a->data < b->data){
//             temp->next = a;
//             temp = temp->next;
//             a=a->next;
//         }
//         else{
//             temp->next=b;
//             temp = temp->next;
//             b=b->next;
//         }
//     }
//     if(a!=NULL) temp->next = a;
//     else temp->next = b;
//     return head->next;
// }

// Node* flatten(Node* root){
//    if(!root) return NULL;
//    Node* res = root;
//    Node* temp = root->down;
//    while(temp){
//        res = mergeList(res,temp);
//        temp = temp->down;
//    }
//    return res;
// }

int main()
{
    Node* one = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);
    Node* six = new Node(6);
    Node* seven = new Node(7);
    Node* eight = new Node(8);
    Node* nine = new Node(9);
    Node* ten = new Node(10);
    Node* eleven = new Node(11);
    Node* twelve = new Node(12);
    Node* thirteen = new Node(13);
    Node* fourteen = new Node(14);
    Node* fifteen = new Node(15);
 
  
    Node* head = one;
 

    one->down = four;
    four->down = fourteen;
    fourteen->down = fifteen;
    five->down = nine;
    nine->down = ten;
    seven->next = eight;
    eleven->down = thirteen;

    one->next = two;
    two->next = three;
    four->next = five;
    five->next = six;
    six->next = seven;
    ten->next = eleven;
    eleven->next = twelve;
 
    // cout << "The original list is :" << '\n';
    // printOriginalList(head);
 
    head = flattenList(head);
    cout << "\n\nThe flattened list is :" << '\n';
    printFlatenedList(head);
 
    return 0;
}
