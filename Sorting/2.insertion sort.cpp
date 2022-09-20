#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {2,6,4,9,1,3,5,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}