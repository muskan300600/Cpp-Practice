#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int key, int low, int high){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]==key) return mid;
    if(key>arr[mid]) return binarySearch(arr,key,mid+1,n-1);
    return binarySearch(arr,key,0,mid-1);
}

int searchInfinite(int arr[],int key){
    int low =0;
    int high = 1;
    while(low<=high){
        low = high;
        high = 2*high;
    }
    return binarySearch(arr,key,low,high);
}

int main(){
    int arr[]=(1,2,3,4,5,5,7,7,8,9);
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    cout<<searchInfinite(arr,key);
}