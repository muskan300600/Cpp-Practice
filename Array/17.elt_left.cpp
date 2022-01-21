#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[] = {4,6,9,3,0,2,8};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int mid = (n-1)/2;
    cout<<a[mid];
}
    