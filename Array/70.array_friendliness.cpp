#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {82, 53, 42, 41, 76, 19, 39, 10, 82, 93, 12, 83, 58, 9, 49, 18, 58, 32, 49};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int sum =0;
    for(int i=0;i<n;i++){
        if(i==0){
            sum = sum+abs(arr[i]-arr[i+1]);
        }
        else if(i==n-1){
            sum = sum + abs(arr[n-1]-arr[n-2]);
        }
        else{
            if(abs(arr[i]-arr[i+1]) > abs(arr[i]-arr[i-1])){
                sum = sum+abs(arr[i]-arr[i-1]);
            }
            else sum = sum+abs(arr[i]-arr[i+1]);;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<sum;
}