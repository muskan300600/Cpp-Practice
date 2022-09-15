#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
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

bool compute(Node* root)
{
   string s="";
   while(root!=NULL){
       s = s+root->data;
       root = root->next;
   }
   int n = s.length();
   for(int i=0;i<n;i++){
       if(s[i]!=s[n-i-1]){
           return false;
       }
   }
   return true;
}

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    
    if(compute(head))
        cout<<"True";
    else cout<<"False";
}