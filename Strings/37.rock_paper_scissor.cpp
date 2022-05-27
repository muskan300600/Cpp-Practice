#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string g="RR";
    if(g[0]==g[1])
        cout<<"DRAW";
    else if(g[0]=='R'&g[1]=='S'){
        cout<<"A";
    }
    else if(g[0]=='S'&g[1]=='P'){
        cout<<"A";
    }
    else if(g[0]=='P'&g[1]=='R'){
        cout<<"A";
    }
    else cout<<"B";

}