#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
    char arr[] = {'e', 'e', 'b', 'a'};
    int n = sizeof(arr)/sizeof(arr[0]);
    string s;
    for(int i=0;i<n;i++){
        s = s + arr[i];
    }
    cout<<s;

}




