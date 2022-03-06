// Poly: Many
// Morph: Forms
// Types: 
//  Compile time polymorphism
// Run time polymorphism


// Compile time polymorphism: Which is resolved when the program is compiling
// which also means that the program knows which form it will exists in the
// compile time
// Static Polymorphism.

// Two types
// Function overloading, Operator overloading



// //1.1 Function Overloading
// #include<iostream>
// using namespace std;

// class A{
//     public:
//     void greeting(){
//         cout<<"Welcome Professor"<<endl;
//     }

//     // This way its possible, name remains same but some parameters 
//     // are now included which makes it different.
//     void greeting(string name){
//         cout<<"Welcome "<<name<<endl;
//     }

//     int greeting(string name, int n){
//         cout<<"Welcome "<<name<<endl;
//         return n;
//     }
// };


// int main()
// {

//     A obj;
//     obj.greeting(); 
//     obj.greeting("Professor"); 
//     obj.greeting("Professor",5); 

    
// return 0;
// }



//1.2 Operator Overloading: Using some operator to do our custom task. 
// like when we call + it should call Welcome Professor.
// Operators cannot be overloaded: '::', '.*', '.', '?:'


// Overloading +
// #include<iostream>
// using namespace std;

// class A{
//     public:
//     int a,b;


//     public:
//     int Add(){
//         return a+b;
//     }

//     void operator+ (A &obj){
//         int value1=this->a;
//         int value2=obj.a;
//         cout<<"Output: "<<value2-value1<<endl;
//     }
    
//     void operator() (){
//         cout<<"Bracket overloaded: "<<this->a<<endl;
//     }

// };


// int main()
// {
 
//     A obj1,obj2;
    
//     obj1.a=4;
//     obj2.a=17;

//     obj1 + obj2;
//     obj1();
     

    
// return 0;
// }



// Run Time polymorphism: Dynamic polymorphism
// Things that lie in RTP
// Method overriding
// Rule: Function name should be same, function parameters shoudl be same, 
// function should perfrom Inheritance otherwise it will not override.

// Usage: when we have a lot of functions where they are implemented.
// You want custom implementation for some specific class for the same 
// function then in that case it is used.

#include<iostream>
using namespace std;

class Animal{

    public:
    void voice(){
        cout<<"Speaking"<<endl;
    }


};

class Dog: public Animal{

     public:
     void voice(){
        cout<<"Barking"<<endl;
     }


};

int main()
{
        Dog d;
        d.voice(); // Barking

        // If we dont have a function then in that case it will show speaking
        // as it will run the default one.
    

return 0;
}