#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s = "machine";
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        if(arr[(int)(s[i])-97]==1){
            cout<<"No";
        }
        arr[(int)(s[i])-97]=1;
    }
    cout<<"Yes";
}