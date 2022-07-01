#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    string s = "123";
    int n = s.length();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + (s[i]-'0');
    }

    cout<<(sum)*pow(2,n-1);
}