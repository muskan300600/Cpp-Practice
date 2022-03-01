#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr1[] = {2 ,6 ,8, 10, 11, 14, 15, 18, 19, 22, 24, 25, 35, 37, 39, 42, 52, 54, 57, 64, 66, 68, 69, 79,
     80, 82, 84, 86, 89, 90, 91, 92, 93, 98, 99, 100};
    int arr2[] = {6, 8, 15, 24, 26, 27, 28, 29, 33, 35, 38, 42, 65, 68, 83, 87, 90, 94, 96};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int x;
    cout<<"enter the sum: ";
    cin>>x;
    int sum,count=0;
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             sum = arr1[i]+arr2[j];
             if(sum==x){
                 count++;
             }
         }
    }

    cout<<count;

    //with m+n time complexity
    // int i=0,j=n-1;
    // int count =0;
    // while(i<m && j>=0){
    //     int sum = arr1[i]+arr2[j];
    //     if(sum==x){
    //         count++;
    //         i++;
    //         j--;
    //     }
    //     else if(sum>x) j--;
    //     else i++;
    // }
    // cout<<count;
}