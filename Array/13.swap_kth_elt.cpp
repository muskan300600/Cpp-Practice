#include <iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10,11};
    int n = sizeof(a)/sizeof(a[0]);
    int k;
    int temp;
    cout<<"Enter index: ";
    cin>>k;
    
    temp = a[k-1];
    a[k-1]=a[n-k];
    a[n-k]=temp;
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}