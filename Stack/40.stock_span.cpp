#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main(){
    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int> s;
    vector<int> v;
    s.push(0);
    v.push_back(1);
    for(int i=1;i<n;i++){
        while(!s.empty() && arr[s.top()]<=arr[i]){
            s.pop();
        }
        if(s.empty()) v.push_back(i+1);
        else v.push_back(i-s.top());
        s.push(i);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}