#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={3,4,7,2,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]>arr[j]){
                swap(arr[j+1],arr[j]);
                swapped = true;
            }
        }
        if(swapped = false) break;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}