#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string S = "AA1d23cBB4";
    for(int i=0;i<S.length();i++){
        if((S[i]>='a' & S[i]<='z') || (S[i]>='A' & S[i]<='Z')){
            continue;
        }
        else{
            cout<<S[i];
        }
	}
}