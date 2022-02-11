#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int b[]={2,3,5,4,1};
    int count=0;
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    sort(a,a+n);
    sort(b,b+m);
    if(m==n){
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                count++;
            }
        }
    }
    if(count==n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
}