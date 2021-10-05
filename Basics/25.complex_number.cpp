#include <iostream>
using namespace std;

class complex
{
public:
    int a,b;
    void getNumber(){
        cout<<"enter a and b: "<<endl;
        cin>>a>>b;
         cout<<a<<"+"<<b<<"i"<<endl;
    
    }

    void complexNumber(complex c, complex d){
        a = c.a + c.b;
        b= d.a + d.b;
        cout<<a<<"+"<<b<<"i"<<endl;
    }
   
};

int main(){
    complex c1,c2;
    c1.getNumber();
    c2.complexNumber(c1,c1);

}