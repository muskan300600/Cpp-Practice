#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a=27;
    bool val=true;
    if(a==1) val = true;
    else{
        for(int i=2;i*i<=a;i++){
            int b = a;
            while(b%i==0){
                b=b/i;
            }
            if(b==1) val = false;
        }
    }
    cout<<val;
}