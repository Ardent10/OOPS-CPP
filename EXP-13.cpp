#include<iostream>
using namespace std;

class First{
    int bookNo;
    string bookName;

    public:

    void getData1(){
        cout<<"Enter Book No: ";
        cin>>bookNo;
        cout<<"Enter Book Name: ";
        cin>>bookName;
    }

    void putData(){
        cout<<"\nBook No: "<<bookNo;
        cout<<"\nBook Name: "<<bookName;

    }


};

class Second{
    
    string authorName,publisher;

    public:

    void getData2(){
        cout<<"\nEnter Author Name: ";
        cin>>authorName;
        cout<<"\nEnter Publisher Name: ";
        cin>>publisher;
    }

    void showData(){
        cout<<"\nAuthor: "<<authorName;
        cout<<"\nPublisher: "<<publisher;
    }
};

class Third:public First, public Second{
    int pages, year;
    
    public:

    void get(){
        First::getData1();
        Second::getData2();
        cout<<"\nEnter No of Pages: ";
        cin>>pages;
        cout<<"Enter Year of Publication: ";
        cin>>year;
    }

    void display(){
        putData();
        showData();
        cout<<"\nNo of Pages: "<<pages;
        cout<<"Year of Publication: "<<year;
    }
};      

int main()
{   
    int n;
    cout<<"Enter the number of books: ";
    cin>>n;

    Third books[n];

    for (int i = 0; i <n; i++)
    {
        books[i].get();
        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        books[i].display();
        cout<<endl;
    }
    

return 0;
}