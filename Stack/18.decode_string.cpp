#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>

int main(){
    string str ="3[b2[ca]]";
    int n = str.length();
    stack<int> num;
    stack<string> s;
    int currNo=0,prevNo;
    string currS = "",prevS;
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            currNo = (currNo*10)+(str[i]-'0');
        }
        if(isalpha(str[i])){
            currS = currS+str[i];
        }

        if(str[i]=='['){
            num.push(currNo);
            s.push(currS);
            currNo=0;
            currS="";
        }

        if(str[i]==']'){
            prevNo = num.top();
            num.pop();
            prevS = s.top();
            s.pop();

            while(prevNo--){
                prevS = prevS+currS;
            }
            currS = prevS;
        }
    }
    cout<<currS;
}