#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter length: ";
    cin>>k;
    vector<int> v1;
    vector<int> v2;
    vector<int> v;
    for(int i=0;i<k;i++){
        v1.push_back(arr[i]);
    }

    for(int i=k;i<n;i++){
        v2.push_back(arr[i]);
    }

    for(int i=v1.size()-1;i>=0;i--){
        v.push_back(v1[i]);
    }

   

    for(int i=v2.size()-1;i>=0;i--){
        v.push_back(v2[i]);
    }

    for(int i=0;i<v.size();i++){
        arr[i]=v[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}