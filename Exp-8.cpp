#include<iostream>
using namespace std;

class Read{
   
    private:
    float a,b;
    public:
    void getData(){
       
        cout<<"Enter the two numbers to add them: ";
        cin>>a>>b;
    }
   
    friend class Sum;
};

class Sum {
 
  float sum;
  public:
  void add(Read r){
      sum = r.a+r.b;
      cout<<"The sum "<<sum;
  }
};

int main(){
    Read obj;
    Sum S; 
    obj.getData();
    S.add(obj);
     
  return 0;
}
