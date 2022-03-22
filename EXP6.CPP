#include <iostream>
using namespace std;

class A{
  
   public:
   int a,b,c;
  
   void setValue(){
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
   }
   friend void Greatest(A x);
};

void Greatest(A x){
    cout<<"The three numbers are: "<<x.a<<" "<<x.b<<" "<<x.c<<endl;
   
    if(x.a>x.b && x.a>x.c){
        cout<<"A is greatest: "<<x.a<<endl;
    }
    else if(x.b>x.a && x.b>x.c){
        cout<<"B is greatest: "<<x.b<<endl;
    }
    else
    {
        cout<<"C is greatest: "<<x.c<<endl;
    }
   
}

int main()
{
    A a1;
    a1.setValue();
    Greatest(a1);

    return 0;
}