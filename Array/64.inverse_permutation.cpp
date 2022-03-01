#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1, 4, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int brr[n];
    int num =1;
    int index;
    for(int i=0;i<n;i++){
        index=arr[i];
        brr[index-1]=num;
        num++;
    }

    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }

    // int arr[] = {1, 4, 3, 2};
    // int n = sizeof(arr)/sizeof(arr[0]);
    //  vector<int> v(n);
    // int num =1;
    // int index;
    // for(int i=0;i<n;i++){
    //     v[arr[i]-1]=i+1;
    // }
    

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
}