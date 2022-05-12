#include<iostream>
using namespace std;

template <class T>
class Greater{
    T a,b;
    public:

    Greater(T x, T y){
        cout<<"Constructor is invoked "<<endl;
        cout<<"and values of x and y are set."<<endl;
        a = x; b = y;
    }

    void greater(){
        if (a>b)
        {
            cout<<"A: "<<a<<endl;
            cout<<"B: "<<b<<endl;
            cout<<"A is Greater than B"<<endl;
        }
        else 
        {
            cout<<"A: "<<a<<endl;
            cout<<"B: "<<b<<endl;
            cout<<"B is Greater than A"<<endl;
            
        }
    }

    ~Greater(){
        cout<<"Destructor is invoked";
    }

};

int main()
{
        Greater<int> g(55,60);
        g.greater();

return 0;
}