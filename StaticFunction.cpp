// Object creation is not needed.
// No this keyword
// Why? As there is no object therefore this keyword is subtle as it it
// used to access data member functions.

// they can only access static member.


#include <iostream>
#include <string.h>
using namespace std;

class   Hero
{
    //properties
    private:
    int health;
    int hardness;
    
    public:
    char level;
    char *name;

    // This is time to complete variable is basically same for all of the
    // Attributes like hero and energy
    // Therefore it is same for all of them which means we can use 'static' keyword
    // This can be accessed with the creation of the object
    // This belongs to class not objects
    static int timeToComplete;

    Hero (){
        cout<<"Default Constructor called"<<endl;
        name  = new char[100];
    } 

    //Parameterised Constructors
    Hero(int health){
       cout<<"This-> "<<this<<endl; 
       cout<<"Parameterised Constructor called"<<endl; 
      this->health = health;  
    }

    Hero (int health, char level){
        this->level = level;
        this->health = health;    
    }


    //Copy constructor
    Hero(Hero& copy ){  // pass by reference
        
        //This will create a deep copy
        // How?  It will create a new memory location
        // Then copy the elements of the original string
        // afterwards we will change the string
        char *ch = new char[strlen(copy.name)]+1;
        strcpy(ch,copy.name);
        this->name = ch; 



        cout<<"Copy constructor called:"<<endl;
        this->health = copy.health;
        this->level  = copy.level;
    }

    void print(){
        
        cout<<endl;
        cout<<"[Name: "<<this->name<<" ,";
        cout<<"Health: "<<this->health<<" ,";
        cout<<"Level: "<<this->level<<"]"<<endl<<endl;
    }
     
    int getHealth(){
        return health;
    } 

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        // if (name  =='A')
        // {
            health = h; 
        // }
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }
    

    static int staticFunction(){
        // cout<<this->health<<endl;
        // throws the error: 'this' is unavailable for static member functions

        // cout<<health<<endl;
        // Throws error: invalid use of member 'Hero::health' in static member function

        // therefore it cannot access name, level etc

        return timeToComplete; 
        // 5 
    
    }


    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }


};

// Initialization
// :: is scope resolution operator.
// Syntax: data-Type className :: fieldName;
int Hero::timeToComplete = 10;


int main(){

    
    cout<<Hero::staticFunction()<<endl;


  return 0;  
}

