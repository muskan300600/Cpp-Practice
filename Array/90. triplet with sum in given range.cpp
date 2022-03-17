#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = [1 ,4, 45, 6, 10, 8];
    int n = 6;
    int x = 13;
    sort(arr,arr+n);
    bool val = false;
    for(int i=0;i<n-1;i++){
       int start = i+1;
       int end = n-1;
       while(start<end){
           if(arr[i]+arr[start]+arr[end]==x){
               val = true;
               break;
           }
           else if(arr[i]+arr[start]+arr[end]>x) end--;
           else start++;
       }
    }
    cout<<val;
}