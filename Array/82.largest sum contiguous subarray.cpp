#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,2,-4,-5,6,8,-10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>ans){
            ans=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    if(ans>0) cout<<ans;
    else cout<<*max_element(arr,arr+n);
}