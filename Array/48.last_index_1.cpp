#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    string str = "000001";
    int n = str.length();
    int index=-1;
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            index = i;
           
        }
    }
    cout<<index;
}

