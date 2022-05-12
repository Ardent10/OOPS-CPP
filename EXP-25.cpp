#include<iostream>
using namespace std;

int main()
{   
     int x,y;
     cout<<"Enter the two numbers: ";
     cin>>x>>y;

     if (y == 0)
     {
         cout<<"Divion is not possible";
     }
     else
     {
         cout<<"After division: "<<(x/y)<<endl;
     }    

return 0;
}