#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool check[n+1];
    memset(check,true,sizeof(check));
    check[0]=false;
    check[1]=false;
    for(int i=2;i*i<=n;i++){
        for(int j=2*i;j<=n;j=j+i){
            check[j]=false;
        }
    }

    for(int i=0;i<n+1;i++){
        if(check[i]==true){
            cout<<i<<" ";
        }        
    }
}