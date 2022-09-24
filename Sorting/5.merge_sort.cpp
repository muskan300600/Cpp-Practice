#include <iostream>
#include <algorithm>
using namespace std;

void mergeSort(int l, int r, int arr[])
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(l, mid,arr);
        mergeSort(mid + 1, r,arr);
        merge(arr, l, mid, r);
    }
}

void merge(int arr[], int l, int mid, int r)
{
    int b[r];
    memset(b, 0, sizeof(b));
    int i = l;
    int j = mid + 1;
    int k = l;
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    if (i > mid)
    {
        while (j <= r)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }

    for (int k = l; k < r; k++)
    {
        arr[k] = b[k];
    }
}

int main()
{
    int arr[] = {2,6,4,9,1,3,5,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(0,n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}