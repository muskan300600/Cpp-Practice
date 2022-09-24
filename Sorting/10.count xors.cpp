#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a[] = {1, 3, 4, 1, 4};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int count=1,res=0;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]) count++;

        if(a[i]!=a[i-1] || i==n-1){
            res = res+((count*(count-1))/2);
            count=1;
        }
    }
    cout<<res;
}