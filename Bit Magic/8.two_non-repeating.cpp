#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int one=0,two=0;
    int x=0;
    for(int i=0;i<n;i++){
        x = x^arr[i];
    }
    int num = x&~(x-1);
    for(int i=0;i<n;i++){
        int x = arr[i];
        if(x & num ==1){
            one = one^arr[i];
        }
        else two = two^arr[i];
    }

    // for(int i=0;i<n;i++){
    //     cout<<one[i]<<" ";
    // }

    cout<<one<<ends<<two;
}