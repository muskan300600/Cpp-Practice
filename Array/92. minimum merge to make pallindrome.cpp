#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1, 4, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0,j=n-1;
    int ans=0;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else if(arr[i]>arr[j]){
            j--;
            arr[j]+=arr[j+1];
            ans++;
        }
        else{
            i++;
            arr[i]=arr[i+1];
            ans++;
        }
    }
    cout<<ans;
}