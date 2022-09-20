#include <iostream>
#include <algorithm>
using namespace std;

void Quicksort(int arr[],int l, int h){
    if(l<h){
        int pivot = partition(l,h);
        Quicksort(arr,l,pivot-1);
        Quicksort(arr,pivot+1,h);
    }    
}

int partition(int arr[],int l, int h){
    int pivot = arr[(l+h)/2];
    int i = h;
    int j = l;
    while(i<j){
        while(arr[i]<=pivot) i++;
        while(arr[j]>pivot) j++;
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[j],arr[l]);
    return j;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = {2,6,4,9,1,3,5,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}