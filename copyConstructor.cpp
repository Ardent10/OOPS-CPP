#include <iostream>
using namespace std;

class   Hero
{
    //properties
    private:
    int health;
    int hardness;
    
    public:
    char level;

    Hero (){
        cout<<"Default Constructor called"<<endl;
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

    Hero(Hero& copy ){  // pass by reference
        cout<<"Copy constructor called:"<<endl;
        this->health = copy.health;
        this->level  = copy.level;
    }

    void print(){
        cout<<"Health: "<<this->health<<endl;
        cout<<"Level: "<<this->level<<endl;
    }
     
    int getHealth(){
        return health;
    } 

    char getLevel(){
        return level;
    }

    void setHealth(int h,char name){
        if (name  =='A')
        {
            health = h; 
        }
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){

      Hero thomas(24,'A');
      thomas.print(); 
      Hero shelby(thomas);  
      shelby.print();  
     


  return 0;  
}

