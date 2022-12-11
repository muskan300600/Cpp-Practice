#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N=2,M=2;
    int A=[[1,2],[2,1]];
    
    for(int i=0;i<min(N,M);i++){
        int sumr=0,sumc=0;
        for(int j=0;j<N;j++){
            sumc+=A[j][i];
        }

        for(int j=0;j<M;j++){
            sumr+=A[i][j];
        }
        if(sumr!=sumc){
            cout<<0;
            break;
        }
    }
    cout<<1;
}