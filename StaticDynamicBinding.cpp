// Static Binding
// The program decides which function to run at compile time.
// #include<iostream>
// using namespace std;

// int sum(float a, float b){
//     return a+b;
// }

// int sum(float a, float b,float c){
//     return a+b+c;
// }


// int main()
// {

//         cout<<"Sum : "<<sum(5,12)<<endl;
//         cout<<"Sum : "<<sum(5,1,2)<<endl;

// return 0;




// Dynamic binding using all library.
#include<bits/stdc++.h>
using namespace std;

class User{
    public:
    virtual void getPermission(){
        cout<<"Users can see limited info "<<endl;
    }
};

class SuperUser:public User{
    
    void getPermission(){
        cout<<"Super users can see All info "<<endl;
        
    }

};


int main()
{
    User u;
    SuperUser s;
    list<User*>users;

    users.push_back(&u);
    users.push_back(&s);

    for (User* usrPtr:users)
    {
        usrPtr->getPermission();
    }      

return 0;
}
