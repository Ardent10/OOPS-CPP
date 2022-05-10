#include<iostream>
using namespace std;

class Student{
    int rollNo;
    string name;
    
    public:

    void getData(){
        cout<<"Enter Student Roll Number: ";
        cin>>rollNo;
        cout<<"Enter Studnet Name: ";
        cin>>name;
    }

    void putData(){
        cout<<"\nRoll No: "<<rollNo;
        cout<<"\nName: "<<name;
        cout<<endl;
    }

};

class Exam:public Student{
    float sum=0, maths=0,oops=0,comm=0,coa=0,toc=0,physics=0;

    
    public:

    void getData(){
        Student::getData();
        cout<<"Enter the marks \n";
        
        cout<<"Maths: ";
        cin>>maths;
        cout<<"OOPS: ";
        cin>>oops;
        cout<<"Comm: ";
        cin>>comm;
        cout<<"COA: ";
        cin>>coa;
        cout<<"TOC: ";
        cin>>toc;
        cout<<"Physics: ";
        cin>>physics;
                
    }

    float getMarks(){
        Student::putData();
        cout<<"\nMarks of the Students are: \n";
        cout<<"\nMaths: "<<maths;
        cout<<"\nOOPS: "<<oops;
        cout<<"\nComm: "<<comm;
        cout<<"\nCOA: "<<coa;
        cout<<"\nTOC: "<<toc;
        cout<<"\nPhysics: "<<physics;
        cout<<endl;
    
        sum  = maths+oops+comm+coa+toc+physics;
        return sum;

    }

};

class Result: public Exam{
    float result;
    public:
    
    void total(){
       Exam::getData(); 
       result = getMarks();     

        if (result/600>0.333)
        {   
            cout<<"\nTotal Marks: \n"<<result;
            cout<<"\nResult: Passed";
        }
        else{

            cout<<"\nTotal Mars: \n"<<result;
            cout<<"\nResult: Failed\n";
        }
    }

};


int main()
{

    Result r1;
    r1.total();
    
return 0;
}