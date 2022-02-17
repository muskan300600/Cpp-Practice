#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for (int i=0;i<n;i++){
        int j = i+1;
        int k = n-1;
        while(j<k){
            if(arr[i]+arr[j]+arr[k]==0){
                cout<<i<<ends<<j<<ends<<k;
                
            }

            if(arr[i]+arr[j]+arr[k]<0){
                k--;
            }
            
            if(arr[i]+arr[j]+arr[k]<0){
                j++;
            }

        }
    }
    cout<<"False";
}

