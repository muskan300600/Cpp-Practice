#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = { 12, 40, 11, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i+1]-arr[i]==arr[i+2]-arr[i+1]){
                count++;
            }
        }
        if(count==n-2)
            cout<<"1";
        else cout<<"0";
}