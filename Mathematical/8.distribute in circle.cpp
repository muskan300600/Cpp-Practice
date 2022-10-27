#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a = 8;
    int b = 5;
    int c = 2;
    a = a %b;
    c = c%b;
    cout<<(a+c-1)%b;
    //-1 beacuse we subtract one from the same number as well.
}