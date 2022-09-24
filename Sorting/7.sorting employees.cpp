#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class node {
public:
    int salary;
    string name;
};

bool compare(node a, node b){
    if(a.salary==b.salary){
        return (a.name<b.name);
    }
    return (a.salary<b.salary);
}

int main(){
    node arr[]= {{"xbnnskd", 100}, {"geek", 50}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].salary<<" "<<endl;
    }
}
