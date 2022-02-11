#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }

        else{
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}