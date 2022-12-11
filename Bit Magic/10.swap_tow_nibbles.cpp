#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    unsigned char x;
    cin>>x;
    unsigned char a=x<<4;
    unsigned char b= x>>4;
     
    cout<<a+b;
}