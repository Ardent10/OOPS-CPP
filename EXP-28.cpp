#include<iostream>
#include<fstream>
using namespace std;
// File stream
int main()
{   
    string st;
    ifstream in("sample.txt");
    getline(in,st);
    cout<<"The content in sample.txt is: "<<st;
    

  
return 0;
}
