#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

void heapify(int arr,int n, int i){
    int large = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left<n && arr[left]<arr[large]){
        large = left;
    }
    if(right<n && arr[right]<arr[large]){
        large = right;
    }

    if(large!=i){
        swap(arr[large],arr[i])
        heapify(arr,n,large);
    }
}

void buildHeap(int arr[],int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}

void printHeap(int arr[], int n)
{
    for (int i = 0; i <= n; ++i)
        cout << arr[i] << " ";
 
    cout << "\n";
}

int main(){
    int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n = sizeof(arr)/sizeof(arr[0]);
    buildHeap(arr, n); 
    printHeap(arr, n);
}