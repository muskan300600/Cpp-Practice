#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int num = a^b;
    int count=0;
    while(num){
        num = num&(num-1);
        count++;
    }
    cout<<count;
}