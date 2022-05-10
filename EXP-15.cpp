#include<iostream>
using namespace std;

class Shape{
    public:
    double l1,l2;

    Shape(){
        l1=0;
        l2=0;
    }

    void get_data(){
        cout<<"\nEnter the lengths to compute Area: ";
        cin>>l1>>l2;
    }

    virtual void display_area(){}

};

class Triangle:public Shape{
    public:

    void display_area()
    {
        cout<<"\nArea of Triangle = "<<(l1*l2)/2;
    }
};

class Rectangle:public Shape{
    public:
    void display_area()
    {
        cout<<"\nArea of Rectangle = "<<l1*l2;
    }
};

int main()
{       
        Shape *s;
        Triangle t;
        t.get_data();
        s=&t;
        s->display_area();
        Rectangle r;
        r.get_data();
        s=&r;
        s->display_area();

return 0;
}