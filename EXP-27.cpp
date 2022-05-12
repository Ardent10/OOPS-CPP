#include<iostream>
#include<fstream>
using namespace std;

int main()
{       
    char inputstring[100];
    
    cout<<"Enter your string to save in the file: ";
    cin.getline(inputstring,100);

    ofstream out("sample.txt");
    out<<inputstring;

return 0;
}