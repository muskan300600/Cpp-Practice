#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,2,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=0;
    for(int i=0;i<n;i++){
        x = x^arr[i];
    }
    cout<<x;
}