#include<iostream>
using namespace std;

class Book {

    public:

    Book(){
        cout<<"Constructor initialized"<<endl;
    }

    ~Book(){
        cout<<"Destructor";
    }

};