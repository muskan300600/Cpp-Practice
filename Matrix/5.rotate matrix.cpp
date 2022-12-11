#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N=3,M=3,K=1;
    int Mat=[[1,2,3],[4,5,6],[7,8,9]];
    int b[N][M];
    //for vector: vector<vector<int>>b(N,vector<int>M);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int t = (K+j)%M;
            b[i][j]=Mat[i][t];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}