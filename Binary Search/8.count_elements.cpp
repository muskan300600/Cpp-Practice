#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarySearch(int arr2[],int n,int x){
    int s =0;
    int e=n-1;
    while(s<=e){
        int mid = (s+(e-s))/2;
        if(arr2[mid]<=x) s = mid+1;
        else e=mid-1;
    }
    return s;
}

int main(){
    int arr1[] = {1,2,3,4,7,9};
    int arr2[] = {0,1,2,1,1,4};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> v;
    sort(arr2,arr2+n);
    for(int i=0;i<m;i++){
        v.push_back(binarySearch(arr2,n,arr1[i]));
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}