# include <iostream>
using namespace std;

//int sum(int,int) is also an acceptable format
int sum(int a,int b){
    return a+b;
}

int main(){
int first,second;
    cout<<"enter the first number: ";
    cin>>first;
    cout<<"enter the second number: ";
    cin>>second;
    cout<<"The sum of both the numbers is: "<<sum(first,second);
}