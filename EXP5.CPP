#include <iostream>
using namespace std;
class B;

class A{
   
   public:
   int a;
  
  
   void SetValue(int i){a = i;}
   friend void max(A x,B y);
};

class B{
   
    public:
    int b;
    void SetValue(int j){b=j;}
    friend void max(A x,B y);
     
};

void max(A x,B y){
    cout<<"The two numbers are: "<<x.a<<" "<<y.b<<endl;
   
    if(x.a>y.b){
        cout<<"A is greater than B: "<<x.a<<endl;
    }
    else
    {
        cout<<"B is greater than A: "<<y.b<<endl;
    }
}



int main()
{
    A a1;
    B b1;
   
    int n1,n2;
    cout<<"Enter the two numbers: ";
    cin>>n1>>n2;
   
    a1.SetValue(n1);
    b1.SetValue(n2);
   
    max(a1,b1);
       
   
   

return 0;
}