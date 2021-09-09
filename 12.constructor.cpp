# include <iostream>
using namespace std;
class Box{
    private:
    int l,b,h;
    public:
    //default constructor
    Box(){
        l=b=h=0;
    }
    //parameterized constructor
    Box(int length,int breadth,int height){
        length=l;
        breadth=b;
        height=h;
    }
    //copy constructor B
    Box(const Box &B){
        l=B.l;
        b=B.b;
        h=B.h;
    }
   
    //setter method
    void set_length(int a){
        l=a;
    }

    //getter method
    int get_length(){
        return l;
    }

};

//or can also be written as

Box::Box(void){
    l=b=h=0;

}

Box::Box(int x,int y,int z){
    l=x;
    b=y;
    h=z;
}

int main(){
 
}
