#include<iostream>
using namespace std;

template <class T>
class A{
    public:
    T data;
    
    A(T a){
       data=a; 
    }
    void display();
};
template <class T>
void A<T>::display(){
    cout<<"Data: "<<data;
}

int main()
{

    A<int> h(5.7);
    cout << h.data << endl;
    h.display();

return 0;
}