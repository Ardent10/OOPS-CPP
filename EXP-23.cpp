#include <iostream>
using namespace std;
// a template function than will take classes
template<class t1,class t2>
void sum(t1 a,t2 b) 
{
    cout<<"\nSum: "<<a+b<<endl;
}

int main()
{
    int a,b;
    float x,y;
    cout<<"\nEnter two integer number: ";
    cin>>a>>b;
    cout<<"Enter two float number: ";
    cin>>x>>y;
    sum(a,b); 
    sum(x,y); 
    sum(a,x); 

    return 0;
}
