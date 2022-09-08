#include<iostream>
using namespace std;

//  Templating in C++ and Creating an Inline Function for Calculation the area of square
template <class T>
inline T Square (T a){
    T result;
    result = a*a;
    return result;    
};

int main()
{   
    cout<<"Program to get Square using Template Function"<<endl;
    int i,r1;
    float f,r2;
    double d, r3;

    i = 5, f= 3.8, d= 5.67;
    
    r1 = Square<int>(i);
   cout<<"Side: "<<i<<endl;
   cout<<"Area: " << r1 << endl;

   r2 = Square<float>(f);
   cout<<"Side: "<<f<<endl;
   cout<<"Area: " << r2 << endl;

   r3 = Square<double>(d);
   cout<<"Side: "<<d<<endl;
   cout<<"Area: " << r3 << endl;

return 0;
}
