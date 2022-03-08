// Implementation hiding
// Only you can change your code
// Security
// Increases reusability
// Avoids duplication 
// Abstraction is the method of hiding the unwanted information. 
// Whereas encapsulation is a method to hide the data in a single 
// entity or unit along with a method to protect information from outside.


#include<iostream>
using namespace std;

class abstraction {
    
    private:
    int a,b;

    public:

    void set(int x,int y){
        a=x;
        b=y;
    }   
    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }

};


int main()
{

    abstraction obj;
    obj.set(10,54);
    obj.display();

return 0;
}