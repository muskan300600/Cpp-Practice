#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1, 100, 42, 4, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max1=-1;
    int max2 = -2;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2){
            max2 = arr[i];
        }
    }

    cout<<max1*max2;
}