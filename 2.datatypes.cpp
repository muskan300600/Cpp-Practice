#include <iostream>
using namespace std;

int main(){
    int a;
    a=1;
    cout<<a<<endl;

    float b =78.9;
    cout<<b<<endl;

    cout<<"The value of a is "<<a<<ends<<" and that of b is"<<b<<endl;

    int const c =10;
    cout<<c<<endl;

    int d=9;
    long e=10;
    long long f=90;

    float d = 34.4F;
    long double e = 34.4L;
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4L) << endl;

}