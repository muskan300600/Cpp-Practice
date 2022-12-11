#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n=3,m=3;
    int Mat=[[1,2,3],[6,5,4],[7,9,8]];
    int count=0;
    for(int i=0;i<n;i++){
        int sorted=0;
        for(int j=0j<m-1;j++){
            if(Mat[i][j]>Mat[i][j+1]) sorted++;
            if(Mat[i][j]<Mat[i][j+1]) sorted--;
        }
        if(sorted==m-1||sorted==1-m){
            count++;
        }
    }
    cout<<count;
}