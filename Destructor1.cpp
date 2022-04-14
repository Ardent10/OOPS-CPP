// Destructor is used to deallocate memory allocated to the program.
// When the class is created the destructor is also created just like constructor.
 
// No retrun type
// Same class name
//  No input parameter

#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
    //properties
    private:
    int health;
    int hardness;
    
    public:
    char level;
    char *name;

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

    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }

};

int main(){

    // Static
    Hero h1;

    // Dynamic
    Hero *h2 = new Hero();    

    // This gives 3 output 2 for default constructor and 1 for Destructor, why?
    // This is because the h1 is static whose constructor is called automatically
    // In case of h2 which is dynamically allocated, the desctructor is called
    // manually and that is why the destructor is only called once. for the 
    // statically allocated object.

    // Manually calling the destructor
    delete h2; 
    // Now the destructor is called twice.

  return 0;  
}

