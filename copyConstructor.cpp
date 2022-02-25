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

    Hero(Hero& copy ){  // pass by reference
        char *ch = new char[strlen(copy.name)]+1;
        strcpy(ch,copy.name);

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

};

int main(){

    //   Hero thomas(24,'A');
    //   thomas.print(); 
    //   Hero shelby(thomas);  
    //   shelby.print();  
     
     Hero h1;
     h1.setHealth(15);
     h1.setLevel('D');

    char name[9] = "Zakariya";
    h1.setName(name);
    h1.print();

    //use default constructor
    Hero h2(h1);
    // Hero h2 = h1;
    h2.print();
    h1.name[0] = 'z';
    h1.print();

    h2.print();    



  return 0;  
}

