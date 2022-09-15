#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    int flag;
};

void push(Node** ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->flag=0;
    new_node->next=(*ref);
    (*ref)=new_node;
}

bool detectLoop(Node* h)
{
    while (h != NULL) {
        if (h->flag == 1)
            return true;
        h->flag = 1;
        h = h->next;
    }
    return false;
}

// bool detectLoop(Node* head)
//     {
//         Node* curr=head;
//         unordered_set<Node*> s;
//         while(curr){
//             if(s.count(curr)!=0){
//                 return true;
//             }
//             else{
//                 s.insert(curr);
//             }
//             curr=curr->next;
//         }
//         return false;
//     }

int main(){
    Node* head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    head->next->next->next->next = head;

    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
    
}