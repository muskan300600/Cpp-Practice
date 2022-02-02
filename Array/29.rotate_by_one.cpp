#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int b[n];
    for(int i=0;i<n;i++){
        if(i==n-1){
            b[0]=a[n-1];
        }
        else{
            b[i+1]=a[i];
        }
    }

    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}