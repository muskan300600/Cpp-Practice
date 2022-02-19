#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a[]={2,1,3};
    int b[] = {7,8,9};
    int n =3;
    int k;
    cin>>k;
    sort(a,a+n);
        sort(b,b+n);
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]+b[n-1]>=k){
                count++;
            }
        }
        
        if(count==n){
            cout<<"1";
        }
        else cout<<"0";
}
