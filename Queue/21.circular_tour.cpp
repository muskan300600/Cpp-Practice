#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;

class PetrolPump{
public:
    int petrol;
    int distance;
};

int main(){
    int n;
    cin>>n;
    PetrolPump p[n];
    for(int i=0;i<n;i++){
        cin>>p[i].petrol>>p[i].distance;
    }
    int countp=0,countd=0;
    for(int i=0;i<n;i++){
        countp+=p[i].petrol;
        countd+=p[i].distance;
    }
    if(countp<countd) cout<<-1;
    else{
        int start=0;
        int end=0;
        int i=0;
        int carry=0;
        while(i!=n){
            if(carry+p[end].petrol<p[end].distance){
                carry = carry + (p[end].petrol-p[end].distance);
                end = (end+1)%n;
                i++;
            }
            else{
                end = (end+1)%n;
                start = end;
                carry=0;
            }
        }
        cout<<start;
    }
}