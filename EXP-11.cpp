#include<iostream>
using namespace std;

class Complex{
    
    float real,imaginary;
    
    public:

    Complex(){}

    Complex(float r){ 
        real  = r;
        imaginary = r;
    }

    Complex(float r, float i){
        real  = r;
        imaginary = i;
    }

    Complex add (Complex a, Complex b){
        Complex c;
        c.real = a.real+b.real;
        c.imaginary = a.imaginary+b.imaginary;
        return c;
    }

    void Display(){
        cout<<"Real: "<<real<<endl;
        cout<<"Imaginary: "<<imaginary<<endl;
        cout<<"The Complex number is: "<<real<<" + "<<imaginary<<"i";
    }

};

int main()
{
        Complex a(5,9),d;
        Complex b(32,8),c;
        c = d.add(a,b);
        c.Display();
    
return 0;
}