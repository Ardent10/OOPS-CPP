#include<iostream>
using namespace std;

class A{

    public:
    void func(){
        cout<<"This is Function A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"This is Function B"<<endl;
    }
};

class C: public A,public B{
     
};

int main()
{
    C obj;
    // obj.func(); // giving ambigious    

    obj.A::func();
    obj.B::func();



return 0;
}