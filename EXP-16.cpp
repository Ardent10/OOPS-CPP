#include<iostream>
using namespace std;
class List
{
    public:
    int x;

    virtual void store(){
        x = 5; 
    }; 
    virtual void retrieve(){
        cout<<"In List class";
    };


};

class Stack:public List 
{
    public:
    void store(){
        x =2;
        cout<<"The value of X becomes: "<<x;
    }
};

class Queue: public List{
    public:
    void retrieve(){
        cout<<"\nIn  Queue class";
    }
};

int main()
{
        Stack s;
        List* l1 = &s;
        l1->store();
        
        Queue q;
        List* l2=&q;
        l2->retrieve();

return 0;
}
