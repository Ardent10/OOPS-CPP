#include<iostream>
using namespace std;

class Fibonacci{
	int a = 0,b = 1, c = a+b;

	public:

	Fibonacci(){}
	Fibonacci(Fibonacci &ptr){
    	a = ptr.a;
    	b = ptr.b;
    	c = ptr.c;

	}

	void series(){
    	a=b;
    	b=c;
    	c=a+b;

	}
    
	void Display(){
    	cout<<c<<" ";
	}

};

int main(){

	int n;
	cout<<"Enter the no of elements in the Fibonacci series: ";
	cin>>n;

	Fibonacci f1;
	Fibonacci f2=f1;
    
	cout<<"Fibonacci Series: 1  ";
	for(int i=0; i<n;i++){
    	f2.Display();
    	f2.series();
	}

  return 0;
}
