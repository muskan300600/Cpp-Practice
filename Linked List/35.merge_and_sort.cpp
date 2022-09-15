#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node* bottom;
};

void push(Node **ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*ref);
    (*ref) = new_node;
}
void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data <<ends;
        node = node->next;
    }
    cout << endl;
}

// Node* merge(Node* a,Node* b){
//     Node* temp = new Node();
//     temp->data=0;
//     Node* head = temp;
    
//     while(a && b){
//         if(a->data < b.data){
//             temp->bottom = a;
//             temp->bottom = temp;
//             a->bottom=a;
//         }

//         else{
//             temp->bottom = b;
//             temp->bottom = temp;
//             b->bottom=b;
//         }
//     }

//     if(a!=NULL) temp->bottom=a;
//     else temp->bottom=b;
//     return head->bottom;
// }

int main(){
    Node* res = NULL;
    Node* first = NULL;
    Node* second = NULL;

    push(&first, 6);
    push(&first, 4);
    push(&first, 9);
    push(&first, 5);
    push(&first, 7);
    printList(first);
    cout<<endl;

    push(&second, 4);
    push(&second, 8);
    printList(second);
    cout<<endl;

    Node* curr1 = first;
    while(curr1!=NULL){
        curr1=curr1->next;
    }
    
    curr1->next=second;
    
    vector<int> v;
    Node* head=first;
    while(head!=NULL){
        v.push_back(head->data);
        head = head->next;
    }

    sort(v.begin(),v.end());
    int n = v.size();
    Node* val = first;
    for(int i=0;i<n;i++){
        val->data = v[i];
        val=val->next;
    }
    printList(first);    

}