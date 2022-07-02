#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main(){
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l[n],r[n];
    stack<int> s;
    s.push(arr[0]);
    l[0]=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>s.top()){
            s.push(arr[i]);
        }
        l[i]=s.top();
    }

    while(!s.empty()){
        s.pop();
    }

    r[n-1]=arr[n-1];
    s.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>s.top()){
            s.push(arr[i]);
        }
        r[i]=s.top();
    }
    int res =0;
    for(int i=0;i<n;i++){
        res = res + (min(l[i],r[i])-arr[i]);
    }
    cout<<res;
}