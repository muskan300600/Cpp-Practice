#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int arr[] = {12, 5, 787, 1, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter number: ";
    cin>>k;
    vector<int> v;
    sort(arr,arr+n);
    for(int i=n-1;i>=n-k;i--){
        v.push_back(arr[i]);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}