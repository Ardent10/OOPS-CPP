#include<iostream>
#include<fstream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{

    string st,st1;
    ifstream in("sample.txt");
    getline(in,st);
    cout<<"The content in sample.txt is: "<<st;
    
    st.erase(std::remove_if(st.begin(), st.end(), ::isspace), st.end());
    ofstream out("sample1.txt");
    out<<st;
    st1= st;
    ifstream fs("sample1.txt");
    getline(fs,st);
    cout<<"\nThe content in sample1.txt is: "<<st1;


return 0;
}