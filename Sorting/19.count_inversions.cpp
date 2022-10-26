#include <iostream>
#include <algorithm>
using namespace std;

long long mergeSort(int l, int r, int arr[])
{
    long long inv =0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv+=mergeSort(l, mid,arr);
        inv+=mergeSort(mid + 1, r,arr);
        inv+=merge(arr, l, mid, r);
    }
    return inv;
}

long long merge(int arr[], int l, int mid, int r)
{
    long long inv =0;
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
            inv+= mid-i+1;
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
    return inv;
}

int main()
{
    int arr[] = {2,6,4,9,1,3,5,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<mergeSort(0,n,arr);
    
}