//Generally constructors are used for initializing variables that are declared
//in the class  

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
        cout<<"Custom Constructor called"<<endl;
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

    void print(){
        cout<<level<<endl;
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

        // cout<<"Welcome"<<endl;
        // Hero shelby;
        // cout<<"Professor"<<endl;

        // cout<<"Logan"<<endl;    
        // Hero *h = new Hero;
        // cout<<"What did you do?"<<endl;    
 

        Hero thomas;
        Hero shelby(23);
        cout<<"Address of Shelby is: "<<&shelby<<endl;    


        Hero *h = new Hero(27);

        Hero X(32,'C');

  return 0;  
}

