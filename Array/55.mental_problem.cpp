#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a[] = {2, 1, 2};
    int b[] = {3, 2, 1};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        if(i%2==0)
            sum1 = sum1+a[i];
        else
            sum2 = sum2+a[i];   
    }

    for(int i=0;i<m;i++){
        if(i%2==0)
            sum2 = sum2 + b[i];
        else
            sum1 = sum1 + b[i];
    }

    if(sum1<sum2)
        cout<<sum1;
    else cout<<sum2;
    
}