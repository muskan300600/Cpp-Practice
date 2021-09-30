#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverse(int a){
    int rem=0,rev=0;
    while(a>0){
        rem = a %10;
        rev = rev*10 +rem;
        a = a/10;
    }
    
}

bool isPal(int a){
    
    if(a==reverse(a)){
        cout<<"Yes";
    }
    cout<<"No";
}

int main(){
    //int a[]={111,222,333,444,555};
    //int n = sizeof(a)/sizeof(a[0]);
    int a = 101;
    isPal(a)
}
