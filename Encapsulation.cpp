// Encapsulation: Wrapping up data member and function in a single entity.
// Data member: Properties/state
// Function: method/behaviour

// Fully encapsulated class:  All Data member is private
// The class is private and all its data member
// private:
// int num;
// string level; 
// We cannot directly access them.

// Purpose: Information hiding or Data hiding.

// Advantage
// Data hiding which provides Security
// We can make class "Read Only"
// Code Reusability.
// Further it is used in Unit Testing

// Implementation

#include<iostream>
using namespace std;

class Student{

    private: 
     string name;
     int age;
     int height;


    public:
    int getAge(){
        return this->age; 
    } 

};


int main(){

    Student s1;
    cout<<"The above code is from Encapsulation"<<endl; 

    return 0;
}
