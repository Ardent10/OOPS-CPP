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



// // 2. Multiple Inheritance
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



// 2. Hierarchical Inheritance
#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void voice(){
        cout<<"Voice: ";
    }



};

class Human {
    
    public:
    string color;

    public:
    void speak(){
        cout<<"Speaking";
    }


};

class Hybrid: public Animal,public Human{




};


int main()
{
    Hybrid h;
    h.voice();
    cout<<"Barking"<<endl;

    h.voice();
    h.speak();    

    // So this will give the output including both the animal class and the human class

return 0;
}