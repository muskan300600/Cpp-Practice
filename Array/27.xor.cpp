#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int arr[] = {5, 9, 7, 6};
    vector<int> v;
    int value;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(i<n-1){
            value = arr[i] ^ arr[i+1];
            v.push_back(value);
        }
        else if(i==n-1){
            v.push_back(arr[i]);
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}