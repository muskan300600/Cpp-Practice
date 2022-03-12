#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[]={5,5,5,5,5,5,5,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1])
            continue;
        sum = sum + arr[i];
    }

    cout<<sum;
    
}