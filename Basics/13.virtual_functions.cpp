#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
    int age;

    virtual void getdata(){
        cin>>name>>age;
    }

    virtual void putdata(){
        cout<<name<<" "<<age<<endl;
    }
};

class Professor: public Person{
    public:
    int publications;
    static int id;
    Professor(){
        id++;

    }
    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<endl;

    }
};
int Professor::id=0;

int main(){

}