#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {13, 6, 7, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    for(int i=0;i<n;i++){
        auto a = s.find(arr[i]);
        if(a!=s.end()){
            arr[i]=*(++a);
            if(a==s.end()){
                arr[i]=-10000000;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}