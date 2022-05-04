#include <iostream>
using namespace std;
class A{
	int objNo;
	static int objCount;
    
	public:
    
	A(){
    	objNo = ++objCount;
	}
    
    
	void displayObjNo(void){
    	cout<<"Object number: "<<objNo<<"\n";
	}
    
	static void displayObjCount(void){
    	cout<<"Count: "<<objCount<<"\n";
	}
    
	~A(){
    	--objCount;
	}
};

int A::objCount;

int main()
{
	A a1,a2;
	A::displayObjCount();
    
	A a3;
	A::displayObjCount();
    
	a1.displayObjNo();
	a2.displayObjNo();
	a3.displayObjNo();
   
   return 0;
}
