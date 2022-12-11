#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

void insert(int arr[],int n,int key){
    //check if heap-size== capacity
    n = n+1;
    arr[n]=key;
    int i = n;
    while(i>1){
        int parent = i/2;
        if(arr[parent]<arr[i]){
            swap(arr[parent],arr[i]);
            i = parent;
        }
        else break;
    }
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
    int key = 15;
    insert(arr, n, key);
    printArray(arr, n);
    return 0;
}