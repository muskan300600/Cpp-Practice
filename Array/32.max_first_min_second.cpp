#include <iostream>
using namespace std;

int main(){
    int a[] = {5, 7, 9, 3, 6, 2};
    int b[] = {1, 2, 6, -1, 0, 9};
    int na = sizeof(a)/sizeof(a[0]);
    int nb = sizeof(b)/sizeof(b[0]);
    int max=a[0];
    int min =b[0];

    for(int i=0;i<na;i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    for(int j=0;j<nb;j++){
        if(b[j]<min){
            min=b[j];
        }
    }

    cout<<max*min;
}

