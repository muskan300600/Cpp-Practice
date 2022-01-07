#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,5,8,10,14};
    int n= sizeof(a)/sizeof(a[0]);
    int x;
    cout<<"Enter the number:"<<endl;
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]<=x){
            count++;
        }
    }
    cout<<count;
}