#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main(){
    int arr[]={1,2,2,1,3,1,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    unordered_map<int,int> um;
    int count=0;
    for(int i=0;i<k;i++){
        if(um[arr[i]]==0){
            count++;
        }
        um[arr[i]]++;
    }
    cout<<count<<" ";
    for(int i=k;i<n;i++){
        if(um[arr[i-k]]==1){
            count--;
        }
        um[arr[i-k]]--;
         if(um[arr[i]]==0){
            count++;
        }
        um[arr[i]]++;
        cout<<count<<" ";
    }

    // for(int i=0;i<k;i++){
    //     um[arr[i]]++;
    // }
    // cout<<um.size();
    // for(int i=k;i<n;i++){
    //     if(um[arr[i-k]]==1) um.erase(arr[i-k]);
    //     else um[arr[i-k]]--;
    //     um[arr[i]]++;
    //     cout<<um.size();
    // }
}