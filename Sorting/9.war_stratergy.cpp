#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[]= {9,11};
    int k;
    cin>>k;
    int n = sizeof(arr)/sizeof(arr[0]);
    int s=0,p=0;
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(abs((k-arr[i]%k)%k));
    } 
    sort(v.begin(),v.end());
    for(int i=0;i<(v.size()+1)/2;i++){
        p = p+v[i];
    }
    cout<<p;
}