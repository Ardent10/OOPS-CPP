#include <iostream>
using namespace std;

const int size = 2;
int percentage=0;

class Student{
    public:
    int rollNo;
    char name[26];
    string branch;
    int age;
    string sex;
    int marks[5];
   
    void Input();
    void display();

    void displayPercentage();
   
   
};

void Student::Input(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter Roll No: ";
    cin>>rollNo;
    cout<<"Enter branch: ";
    cin>>branch;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter sex: ";
    cin>>sex;
   
    int i = 5;
    cout<<endl<<"Enter subject Marks: "<<endl;
    while(i-- && i>=0){
       
        if(i==0){
         cout<<"DBMS: ";
        cin>>marks[0];
        }
        else if(i==1){
         cout<<"COA: ";
        cin>>marks[1];
        }
        else if(i==2){
         cout<<"TOC: ";
        cin>>marks[2];
        }
        else if(i==3){
         cout<<"Communication system: ";
        cin>>marks[3];
        }
        else if(i==4){
         cout<<"Applied mathematics: ";
        cin>>marks[4];
        }
    }
    
}

void Student::display(){
    
    cout<<"["<<rollNo<<" "<<name<<" "<<" "<<branch<<" "<<" "<<age<<" "<<sex<<"]"<<endl;
    for (int i = 0; i < 5; i++)
    {
        if(i==4){
         cout<<"DBMS: "<<marks[0]<<endl;
        }
        else if(i==3){
         cout<<"COA: "<<marks[1]<<endl;
        }
        else if(i==2){
         cout<<"TOC: "<<marks[2]<<endl;
        }
        else if(i==1){
         cout<<"Communication system: "<<marks[3]<<endl;
        }
        else if(i==0){
         cout<<"Applied mathematics: "<<marks[4]<<endl;
        }
    }
    
};

void Student::displayPercentage(){
    int sum = 0;
    int total=500;

    for(int i=0;i<5;i++){
        sum +=marks[i];
    }
    percentage=(sum/5);
    if (percentage>70)
    {   
        cout<<name<<endl;
        for (int i = 0; i < 5; i++){
            if(i==4){
            cout<<"DBMS: "<<marks[0]<<endl;
            }
            else if(i==3){
            cout<<"COA: "<<marks[1]<<endl;
            }
            else if(i==2){
            cout<<"TOC: "<<marks[2]<<endl;
            }
            else if(i==1){
            cout<<"Communication system: "<<marks[3]<<endl;
            }
            else if(i==0){
            cout<<"Applied mathematics: "<<marks[4]<<endl;
            }
        }
    }
     
};


int main() {
   
    Student CSE[size];
   
    cout<<"Enter the data of the students: "<<endl;
    for (int i=0; i<size;i++){
        CSE[i].Input();
    }   


    cout<<"The student details are: "<<endl;
    cout<<endl<<"["<<"Roll-No  Name  branch  age sex "<<"]"<<endl;
    for(int i=0;i<size;i++){
        CSE[i].display();
        cout<<endl;
    }
       
    
    cout<<endl<<"The student with percentage greater thatn 70% are: "<<endl;
    for(int i=0;i<size;i++){
        CSE[i].displayPercentage();
    }
   

    return 0;
}