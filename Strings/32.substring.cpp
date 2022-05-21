#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s ="letsstartthegame";
    string x = "the";
    int index=-1;
    for(int i=0;i<s.length();i++){
         if(x==s.substr(i,x.length())){
            index = i;
            break;
         }
     }
     cout<<index;
}