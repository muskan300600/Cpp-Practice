#include <iostream>
using namespace std;

int main(){
    int a[] = {4,2,7};
    int b[] = {5,6,3};
    int n = sizeof(a)/sizeof(a[0]);
    int ca=0,cb=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            ca++;
        }
        else if(a[i]<b[i]){
            cb++;
        }
    }
    cout<<ca<<endl;
    cout<<cb;
}