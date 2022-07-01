#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    string s = "Help others";
    int start = 0;
    int end = s.length()-1;
    while(start<end){
        if(s[start] == ' '){
            start++;
            continue;
        }
        if(s[end] == ' '){
            end--;
            continue;
        }

        swap(s[start],s[end]);
        start++;
        end--;
    }

    cout<<s;
}