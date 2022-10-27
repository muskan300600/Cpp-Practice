#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a =4;
    int b=4;
    int count = min(a-1,8-b)+min(a-1,b-1)+min(8-a,b-1)+min(8-a,8-b);
    cout<<count;
}