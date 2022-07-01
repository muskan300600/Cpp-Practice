#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    string s = "aaaabbc";
    int k;
    cin>>k;

    if(k>s.length()) cout<<"INVALID";
    int count[26]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
    }
    
    int i=0;
    int index=0;
    while(k!=0){
        int max = INT_MIN;
    for(int i=0;i<26;i++){
        if(count[i]>max){
            max = count[i];
            index = i;
        }
    }
    count[index]=count[index]-1;
    k--;
    }
    
    int sum =0;
    for(int i=0;i<26;i++){
        count[i]=count[i]*count[i];
        sum = sum + count[i];
    }
    
    cout<<sum;
}