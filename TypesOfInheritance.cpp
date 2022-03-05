// Types
// Single, Multi-level,Multiple,hybrid,hierarchical

// 1. Single Inheritance
// #include<iostream>
// using namespace std;

// class Animal{

//     public:
//     int age;
//     int weight;

//     public:
//     void voice(){
//         cout<<"Voice: ";
//     }



// };

// class Dog: public Animal{
     



// };

// int main()
// {
//     Dog d;
//     d.voice();
//     cout<<"Barking"<<endl;
//     cout<<"Age: "<<d.age<<endl;
//     cout<<"Weight: "<<d.weight;

// return 0;
// }


// // 2. Multilevel Inheritance
// #include<iostream>
// using namespace std;

// class Animal{

//     public:
//     int age;
//     int weight;

//     public:
//     void voice(){
//         cout<<"Voice: ";
//     }



// };

// class Dog: public Animal{
     



// };

// class GermanShephard: public Dog{


// };

// int main()
// {
//     GermanShephard d;
//     d.voice();
//     cout<<"Barking"<<endl;
//     cout<<"Age: "<<d.age<<endl;
//     cout<<"Weight: "<<d.weight;

// return 0;
// }



// // 3. Multiple Inheritance
// #include<iostream>
// using namespace std;

// class Animal{

//     public:
//     int age;
//     int weight;

//     public:
//     void voice(){
//         cout<<"Voice: ";
//     }



// };

// class Human {
    
//     public:
//     string color;

//     public:
//     void speak(){
//         cout<<"Speaking";
//     }


// };

// class Hybrid: public Animal,public Human{




// };


// int main()
// {
//     Hybrid h;
//     h.voice();
//     cout<<"Barking"<<endl;

//     h.voice();
//     h.speak();    

//     // So this will give the output including both the animal class and the human class

// return 0;
// }



// 4. Hierarchical Inheritance
// #include<iostream>
// using namespace std;

// class A{

//     public:

//     public:
//     void func1(){
//         cout<<"Function 1 "<<endl;
//     }



// };

// class B: public A {
    
//     public:

//     void func2(){
//         cout<<"Function 2"<<endl;
//     }


// };

// class C: public A{

//     public:
//     void func3(){
//         cout<<"Function 3"<<endl;
//     }


// };


// int main()
// {
//     cout<<endl<<"1";
//     A obj1;
//     obj1.func1();
    
//     cout<<endl<<"2";
//     B obj2;
//     obj2.func1();
//     obj2.func2();
    
//     cout<<endl<<"3";
//     C obj3;
//     obj3.func1();
//     obj3.func3();
    
    
//     // So this will give the output including both the animal class and the human class

// return 0;
// }


// 5. Hybrid Inheritance
#include<iostream>
using namespace std;

class A {

    public:
    A(){
        cout<<"Inherited from A"<<endl;
    }

};

class D{
    public:
    D(){
        cout<<"Inherited from D"<<endl;
    }

};

class B: public A{

};

class C: public A,public D{

};


int main()
{

    C object;
    

    
return 0;
}