#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,6,7,8,9,10,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    int val = arr[low];
    while(low<=high){
        int mid = (low+high)/2;
        val = min(val,arr[low]);
        if(arr[mid]>arr[high]){
            low = mid+1;
        }
        else hight = mid-1;
    }
    cout<<val;
}