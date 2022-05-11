#include<iostream>
using namespace std;

void Function(int a){
    cout<<"I am a Normal Function"<<endl;
    cout<<"Value in normal function: "<<a<<endl;
}

template <class T>
void Function(T a){
    cout<<"I am overloaded Template function\n";
    cout<<"Value is template function: "<<a;
}

int main()
{
    Function(8);
    Function('Z');

return 0;
}