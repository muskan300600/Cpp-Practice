#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[]={3, 4, 3, 5, 2, 3, 4, 3, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx;
    cin>>idx;
    int min = arr[idx];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            count++;
        }
        if(arr[i]==min){
            if(i<idx){
                count++;
            }
        }
        }

        cout<<count;
}
