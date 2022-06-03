#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// void byOne(string s){
//     int temp = s[0],i;
//     for(int i=0;i<s.length();i++)
//         s[i]=s[i+1];
//     s[s.length()-1]=temp;
//     }

// void rotate(string s,int d){
//     for(int i=0;i<d;i++){
//         byOne(s);
//     }
// }

int main(){
    string s = "fsbcnuvqhffbsaqxwp";
    string x = "wpfsbcnuvqhffbsaqx";
    int s1 = s.length();
    int s2 = x.length();
    int f=0;
    if(s1==1 & s2==1){
        if(s==x){
            f=0;
        }
        else f=1;;
    }

    string left = x,right=x;
rotate(left.begin(),left.begin()+2,left.end());
rotate(right.begin(),right.end()-2,right.end());

if(left==s || right==s ||f==1) cout<<"Yes";
else cout<<"No";
}

