#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter:"<<endl;
    cin>>n;

    int i=0;
    int sum=0;
    while(i<=n){
        sum = sum+i;
        i++;
    }

    cout<<sum;

    //int sum = n*(n+1)/2
    //cout<<sum;
}