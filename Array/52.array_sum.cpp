#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }

    for(int i=0;i<n;i++){
        v.push_back(sum-arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}