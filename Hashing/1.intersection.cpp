#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    int a[]={5,10,15,4,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int b[]={5,5,15,4,10};
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        if(s.find(b[i])!=s.end()){
            count++;
            s.erase(b[i]);
        }
    }
    cout<<count;
}