#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** ref,int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next=(*ref);
    (*ref)=new_node;
}

Node* addList(Node* first,Node* second){
    Node* dummy = new Node();
    Node* temp = dummy;
    int carry =0;
    while(first!=NULL||second!=NULL||carry){
        int sum =0;
        if(first!=NULL){
            sum = sum +first->data;
            first=first->next;
        }

        if(second!=NULL){
            sum = sum +second->data;
            second=second->next;
        }

        sum = sum+carry;
        carry = sum/10;
        sum = sum%10;
        Node* new_node = new Node();
        new_node->data = sum;
        temp->next = new_node;
        temp = temp->next;
    }  
    return dummy->next;  
}

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data <<ends;
        node = node->next;
    }
    cout << endl;
}

int main(){
    Node* res = NULL;
    Node* first = NULL;
    Node* second = NULL;

    string val1="",val2="";
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

    printList(addList(first,second));
    
}