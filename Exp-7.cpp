#include<iostream>
using namespace std;

class A{
    
 
	private:
	int a;
    
	public:
	inline void getData();
    
	friend void display(A);
};

inline void A:: getData(){
	cout<<"Enter the value of a: ";
	cin>>a;
}

void display(A obj){
	cout<<"The number entered using Inline function is: "<<obj.a;
}



int main(){
	A obj;
	obj.getData();
	display(obj);


  return 0;
}
