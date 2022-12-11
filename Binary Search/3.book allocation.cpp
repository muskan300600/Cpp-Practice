#include <iostream>
#include <algorithm>
using namespace std;

int maxOf(int arr[], int n)
{
    int val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > val)
        {
            val = arr[i];
        }
    }
    return val;
}

int sumOf(int arr[], int n)
{
    int sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int minPages(int arr[], int k,int n)
{
    int min = maxOf(arr, n);
    int max = sumOf(arr, n);
    int res = 0;
    while (min <= max)
    {
        int mid = (max + min) / 2;
        if(isFeasible(arr, k, mid,n))
        {
            res = mid;
            max = mid - 1;
        }
        else
            min = mid + 1;
    }
    return res;
}

bool isFeasible(int arr[],int k, int res,int n){
    int student = 1;
    int sum = 0;
    for(int i=0;i<n;i++){
        if((sum + arr[i])>res){
            sum = arr[i];
            student++;
        }
        else{
            sum = sum + arr[i];
        }
    }
    return student<=k;
}

int main()
{
    int arr[] = {10, 10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k  ;
    cin >> k;
    cout<<minPages(arr,k,n);
}