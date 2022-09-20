#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {2,6,4,9,1,3,5,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}