#include<iostream>
using namespace std;

class Book{

    public:

    Book(string x){
        setName(x);
    } 

    void setName(string x){ 
        name = x;
    }

    string getName(){
        cout<<"Name of the book is: ";
        return name;
    } 

    private:
    string name;
};

int main()
{
        Book b1("Professor X");
        cout<<b1.getName()<<endl; 

        Book b2("Orielly' JS");
        cout<<b2.getName()<<endl; 

return 0;
}
