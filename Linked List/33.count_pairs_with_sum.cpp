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

int countPairs(Node* head1,Node* head2,int x){
    int count=0;
    unordered_set<int> s;
    while(head1!=NULL){
        s.insert(head1->data);
        head1=head1->next;
    }

    while(head2!=NULL){
        if(s.find(x-head2->data)!=s.end()){
            count++;
        }
        head2=head2->next;
    }
    return count;
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
   
    push(&second, 4);
    push(&second, 8);

    int x;
    cin>>x;
    countPairs(first,second,x);
}