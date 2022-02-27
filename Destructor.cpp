//  The basic use of the destructor is to destroy the object whenever it goes out 
// of scope.
// First constructor is called
// Then all the functions and other code will be executed 
// At the end of this all the resources alloted to the program will now be removed
// which will eventually call the destructor

#include<iostream>
using namespace std;

class Book {

    public:
    Book(){
        cout<<"This is constructor"<<endl;
    }

    ~Book(){ 
        cout<<"This is Destructor"<<endl;
    }


};


int main(){
    
    Book b1;


    return 0;
}