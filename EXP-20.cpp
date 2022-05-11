#include <iostream>
using namespace std;

template <typename T>
void Swap(T &n1, T &n2)
{
        T temp;
        temp = n1;
        n1 = n2;
        n2 = temp;
}

int main()
{
        int i1, i2;
        float f1, f2;
        char c1, c2;

        int n;
        cout<<"1.Swap Integers\n2.Swap Float\n3.Swap Characters\n4.Exit\n";
        cout<<"Your Input: ";
        cin>>n;

        if (n==1)
        {   
            cout<<"Enter I1 & I2: ";
            cin>>i1>>i2;
            cout << "Before Swapping: \n";
            cout<<"I1: "<<i1<<endl;;
            cout<<"I2: "<<i2<<endl;;
            Swap(i1, i2);
            cout << "\nAfter Swapping: \n";
            cout<<"I1: "<<i1<<endl;;
            cout<<"I2: "<<i2<<endl;;
        }
        else if (n==2)
        {   
             cout<<"Enter F1 & F2: ";
            cin>>f1>>f2;
            cout << "Before Swapping: \n";
            cout<<"F1: "<<f1<<endl;;
            cout<<"F2: "<<f2<<endl;;
            Swap(f1, f2);
            cout << "\nAfter Swapping: \n";
            cout<<"F1: "<<f1<<endl;;
            cout<<"F2: "<<f2<<endl;;
        }
        else if (n==3)
        {
            cout<<"Enter C1 & C2: ";
            cin>>c1>>c2;
            cout << "Before Swapping: \n";
            cout<<"C1: "<<c1<<endl;;
            cout<<"C2: "<<c2<<endl;;
            Swap(c1, c2);
            cout << "\nAfter Swapping: \n";
            cout<<"C1: "<<c1<<endl;
            cout<<"C2: "<<c2<<endl;
        }
        else if (n==4)
        {
            return 0;
        }      
        else{
            cout<<"Wrong Input";
        }

    return 0;
}