#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main(){
    int arr[]={12 ,7, 11, 5, 20, 15, 15, 7, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    int count=0;
    stack<int> v;
    vector<int> v1;
    cout<<"Enter the no of values to be deleted"<<endl;
    cin>>k;
    for(int i=0;i<n;i++){
        while(!v.empty() && arr[i]>v.top() && count<k){
            v.pop();
            count++;
        }
        v.push(arr[i]);
    }
    
    while(!v.empty()){
        v1.push_back(v.top());
        v.pop();
    }    
    
    reverse(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<ends;
    }
}