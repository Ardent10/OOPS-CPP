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
        cout<<"Constructor called"<<endl;
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

        // cout<<"Size of Paul is: "<<sizeof(paul)<<endl;
        //Now we cannot directly access health as it is private instead we 
        // we can use the getHealth function which is public making it accessible
        // this is also known as a getter
        // paul.health = 55;   

        // Getter is used to fetch/read
        // Setter is used to give some condition

        // paul.level= 'Z';

        // cout<<"Health is: "<<paul.health<<endl;
        // cout<<"Health is: "<<paul.getHealth()<<endl;
        // setting the value/setter
        // paul.setHealth(50);
        // cout<<"Health is: "<<paul.getHealth()<<endl;

        // cout<<"Level is: "<<paul.level<<endl;

      
      
        // // satic allocation
        // Hero a;
        // a.setHealth(24,'A');
        // a.setLevel('A');
        // cout<<"Level: "<<a.level<<endl;
        // cout<<"Health: "<<a.getHealth()<<endl;



        // //dynamic allocation 
        // Hero *b = new Hero;
        // b->setHealth(54,'A');
        // b->setLevel('D');
        // cout<<"Level: "<<(*b).level<<endl;
        // cout<<"Health: "<<(*b).getHealth()<<endl;
        
        cout<<"Welcome"<<endl;
        Hero shelby;
        cout<<"Professor"<<endl;

        cout<<"Logan"<<endl;    
        Hero *h = new Hero;
        cout<<"What did you do?"<<endl;    
 
  return 0;  
}

