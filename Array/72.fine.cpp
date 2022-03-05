#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int car[] = {2375, 7682, 2325, 2352};
    int fine[] = {250, 500, 350, 200};
    int n = sizeof(car)/sizeof(car[0]);
    int date;
    cin>>date;
    int sum =0;
    for(int i=0;i<n;i++){
        if(date%2==0){
            if(car[i]%2==1){
                sum = sum + fine[i];
            }
        }

        else if(date%2==1){
            if(car[i]%2==0){
                sum = sum + fine[i];
            }
        }
    }

    cout<<sum;
}