#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

void del(int arr,int n){
    //check if heap_size <-0 then return -1
    arr[1]=arr[n];
    n = n-1;
    int i=1;
    while(i<n){
        int left = arr[2*i];
        int right = arr[2*i+1];
        int large = left>right?2*i:2*i+1;
        if(arr[large]> arr[i]){
            swap(arr[large],arr[i]);
            i = large;
        }
        else return;
    }

//      if(heap_size<=0)return -1;
//    if(heap_size==1)
//    {
//        heap_size--;
//        return harr[0];
//    }
//    swap(harr[0],harr[heap_size-1]);
//    heap_size--;
//    MinHeapify(0);
//    return harr[heap_size];
}

void printArray(int arr[], int n)
{
    for (int i = 0; i <= n; ++i)
        cout << arr[i] << " ";
 
    cout << "\n";
}

int main(){
    int arr[MAX] = { 10, 5, 3, 2, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);
    del(arr, n);
    printArray(arr, n);
    return 0;
}