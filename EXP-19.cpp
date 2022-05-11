#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class String
{
    char *s;
    int size;
    public:
    String(char *c)
    {
        size = strlen(c);
        s = new char[size];
        strcpy(s,c);
    }
    char* operator +(char *s1)
    {
        size = strlen(s)+strlen(s1);
        char *s2 = new char[strlen(s)];
        strcpy(s2,s);
        s = new char[size];
        strcpy(s,s2);
        strcat(s,s1);
        return s;
    }
 
    char* operator =(char *s1)
    {
        size = strlen(s1);
        s = new char[size];
        strcpy(s,s1);
        return s;
    }
 
    bool operator <=(char *s1)
    {
        return strcmp(s,s1);
    }
 
    void display()
    {
        cout<<"\nString stored in class: "<<s;
    }
 
    void displaylength()
    {
        cout<<"\nLength of string stored in class: "<<size;
    }
 
    void Tolower()
    {
        cout<<"\nString converted to lowercase";
        for(int i=0;i<size;i++)
        {
            if(isupper(s[i]))
            s[i] = (char)tolower(s[i]);
        }
        display();
    }
    void Toupper()
    {
        cout<<"\nString converted to uppercase";
        for(int i=0;i<size;i++)
        {
            if(islower(s[i]))
            s[i] = (char)toupper(s[i]);
        }
        display();
    }
};
 
int main()
{
    char *s1;
    int choice,l1;
    cout<<"\nProgram to perform Overloading operations on string";
    cout<<"\nEnter length of string: ";
    cin>>l1;
    fflush(stdin);
    s1 = new char[l1];
    cout<<"\nEnter string to be stored in class: ";
    gets(s1);
    String s(s1);
    while(1)
    {
        char *d;
        int length;
        cout<<"\n Menu\n1.String concatenation \n2.String copy \n3.String comparison \n4.Display String \n5.Display length of string \n6.Convert string to lowercase \n7.Convert string to uppercase \n8.Exit  \n";
        
        cout<<"Your Input: ";
        cin>>choice;

        if(choice==1)
        {
            s=s1;
            cout<<"\nEnter the length of new string: ";
            cin>>length;
            d = new char[length];
            fflush(stdin);
            cout<<"\nEnter the string: ";
            gets(d);
            s = s+d;
            cout<<"\nAfter concatenation: ";
            s.display();
        }
        else if(choice==2)
        {
            cout<<"\nEnter the length of new string: ";
            cin>>length;
            d = new char[length];
            fflush(stdin);
            cout<<"\nEnter the string: ";
            gets(d);
            s=d;
            cout<<"\nAfter copying: ";
            s.display();
        }
        else if(choice==3)
        {
            cout<<"\nEnter the length of new string: ";
            cin>>length;
            d = new char[length];
            fflush(stdin);
            cout<<"\nEnter the string: ";
            gets(d);
            if(!(s<=d))
            {
                cout<<"\nStrings are equal";
            }
            else
            {
                cout<<"\nStrings are not equal";
            }
        }
        else if(choice==4)
        {
            s.display();
        }
        else if(choice==5)
        {
            s.displaylength();
        }
        else if(choice==6)
        {
            s.Tolower();
        }
        else if(choice==7)
        {
            s.Toupper();
        }
        else if(choice==8)
        {
            exit(0);
        }
        else
        {
            cout<<"\nWrong choice";
        }
        getch();
    }
    return 0;
}