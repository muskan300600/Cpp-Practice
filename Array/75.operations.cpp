#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,56,76,23,45,98,12,78,0,44};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(i==3)
            arr[i-1]=500;
    }

    for(int i=0;i<n;i++){
        if(arr[i]==5){
            cout<<"Yes";
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]==4)
            arr[i-1]=-1;
    }



}