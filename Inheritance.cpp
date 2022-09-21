// Properties are inherited from parent to child.
// eg: Human class which has properties height,weight,age
// Then if we create a Male from this human this is known as 
// Inhertance because the properties of human class is inherited.

// Human(parent/super class)--> Male(sub-class/child class)

#include<iostream>
using namespace std;

class Human{

    protected:
    int height;
    int weight;

// getter

    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        return this->weight = w;
    }

    private: //private to public inheritance
    int age;
};


// class child_class_name: access modifier parent_class_name{}; 
class Male: private Human{
 
    public:

    string color;

    void sleep(){
        cout<<"The Male Human is sleeping"<<endl;
    }


    int getHeight(){
        // private-public is not acessible as it is private at the parent level
        // protected-private: OK
        // protected-protected: OK

        return this->height; 
    }


};
 


int main()
{
       /*
    Male m1;
    cout<<"The Age of the Male is: "<<m1.age<<endl;
    cout<<"The Height of the Male is: "<<m1.height<<endl;
    m1.setWeight(22);
    cout<<"The weight of the Male is: "<<m1.weight<<endl;
    m1.sleep(); */ 

    // public - protected
    // Male m1;
    // cout<<"The height of the Male is: "<<m1.getHeight()<<endl;
    
    
    Male m1;
    // cout<<"The height of the Male is: "<<m1.height<<endl; //inaccessible
    // cout<<"The height of the Male is: "<<m1.getHeight()<<endl;  //inside class is accessible 

    // protected - public
    // cout<<m1.height<<endl;

    // protected-protected
    cout<<m1.height<<endl;











return 0;
}
