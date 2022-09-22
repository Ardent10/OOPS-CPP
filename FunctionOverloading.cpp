#include <iostream>
using namespace std;

class ShapeArea{

    public:
       // Function overloading
    void Area(int l, int b){
        int area = l*b;
        cout<<endl<<"The area of the Rectangle is: "<<area;

    }

    void Area(float b, float h){
        float area = 0.5*b*h;
        cout<<endl<<"The area of the Triangle is: "<<area;
    }

    void Area(int r){
        float area = 3.14*r*r;
        cout<<endl<<"The area of the Circle is: "<<area;
    }
};


using namespace std;

int main()
{
    ShapeArea A;

    int a;
    cout<<"Choose the Shape you want to find the area"<<endl;
    cout<<"1. Rectangle"<<endl<<"2. Triangle"<<endl<<"3. Circle"<<endl<<"4.Exit"<<endl<<"Your input: ";
    cin>>a;

    if(a==1){
        int l,b;
        cout<<"Enter the length and breadth of the Rectangle: ";
        cin>>l>>b;
        A.Area(l,b);
    }
    else if(a==2)
    {
        float b,h;
        cout<<"Enter the  Base and height of the Triangle: ";
        cin>>b>>h;
        A.Area(b,h);
    }
    else if(a==3)
    {
        int r;
        cout<<"Enter the Radius of the Circle: ";
        cin>>r;
        A.Area(r);
    }
    else if(a==4){
        cout<<"Exiting...";
        return 0;
    }
    else
    {
        cout<<"Invalid input";
    }

    return 0;
}
