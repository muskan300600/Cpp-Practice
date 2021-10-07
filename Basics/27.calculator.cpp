#include <iostream>
#include <string>
using namespace std;

class Calculator{
public:
    int a,b;
    void calculate(int a,int b){
        cout<<"The sum is a+b: "<<a+b<<endl;
        cout<<"The difference is a-b: "<<a-b<<endl;
        cout<<"The product is a*b: "<<a*b<<endl;
        cout<<"The quotient is a/b: "<<a/b<<endl;
        
    }

    void scientific(int a){
        cout<<"The sin value is: "<<sin(a)<<endl;
        cout<<"The cos value is: "<<cos(a)<<endl;
        cout<<"The tan value is: "<<tan(a)<<endl;
        cout<<"The log value is: "<<log(a)<<endl;
    }

};

int main(){
    Calculator cal;
    cal.calculate(3,4);

}