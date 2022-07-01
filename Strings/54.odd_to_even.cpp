#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;



int main(){
    string s = "4543";
    int n = s.length();
    int last = s[n-1];
    int even = INT_MAX;
    int evenIndex = -1;
    for(int i=0;i<n;i++){
        if(s[i]%2==0){
            even = s[i];
            evenIndex = i;
        }
        if(even <= last){
            break;
        }
    }

    if(even == INT_MAX) cout<<s;
    swap(s[evenIndex],s[n-1]);
    cout<<s;
}