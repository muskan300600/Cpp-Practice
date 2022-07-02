#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main(){
    int arr[]={4,3,1,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = INT_MIN;
    for(int i=0;i<n-1;i++){
        sum = max(sum,arr[i]+arr[i+1]);
    }
    cout<<sum;
}