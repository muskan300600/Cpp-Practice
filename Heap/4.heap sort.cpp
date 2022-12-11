#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

void heapify(int arr[],int n,int i){
    int large = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left<n && arr[large]>arr[left]){
        large = left;
    }
    if(right<n && arr[large]>arr[right]){
        large = right;
    }
    if(large!=i){
        swap(arr[large],arr[i]);
        heapify(arr,n,large);
    }
}

void buildHeap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}

void heapSort(int arr[],int n){
    buildHeap(arr,n);
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

void printHeap(int arr[], int n)
{
    for (int i = 0; i <= n; ++i)
        cout << arr[i] << " ";
 
    cout << "\n";
}

int main(){
    int arr[] = {10,20,30,18,70,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr,n);
    printHeap(arr,n);
}