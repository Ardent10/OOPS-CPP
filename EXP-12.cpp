#include <iostream>
using namespace std;
class Basic_info{
    
	string name;
	int rollNo;
	string sex;
    
	public:
    
	void getData1(){
    	cout<<"Enter your Name: ";
    	cin>>name;
    	cout<<"Enter your Roll No: ";
    	cin>>rollNo; 
    	cout<<"Enter your Sex: ";
    	cin>>sex;
	}
    
	void display1(){
    	cout<<"\nName: "<<name;
    	cout<<"\nRoll No: "<<rollNo;
    	cout<<"\nSex: "<<sex;
	}
    
};

class Physical_fit: public Basic_info {
	float height;
	float weight;
    
	public:
    
	void getData2(){
    	getData1();
    	cout<<"Enter your height: ";
    	cin>>height;
    	cout<<"Enter your weight: ";
    	cin>>weight;
	}
	void display2(){
    	display1();
    	cout<<"\nHeight: "<<height;
    	cout<<"\nWeight: "<<weight;
	}
};

int main()
{
	int n;
	cout<<"Enter the number of students: ";
	cin>>n;
    
	Physical_fit obj[n];
    
	cout<<"Enter the details of the students "<<endl;
	for(int i=0; i<n;i++){
    	cout<<"Student no "<<i+1<<"\n";
    	obj[i].getData2();
	}
    
    
	cout<<"\nDetails of the students are: "<<endl;
	for(int i=0;i<n;i++){
    	cout<<"Details of student: "<<i+1<<"\n";
    	obj[i].display2();
	}
    
    
   return 0;
}
