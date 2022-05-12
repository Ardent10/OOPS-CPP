#include<iostream>
using namespace std;

int main()
{
     int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]),n;

    cout<<"The array is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
           
    cout<<endl<<"Enter the index of the array: ";
    cin>>n;
    if (n>size && n>=0)
    {
        cout<<"The input index exceeds array size."<<endl;
        cout<<"Please enter a valid index";
    }
    else
    {
        cout<<"The element at index "<<n<<" is: "<<arr[n];
    }
    

return 0;
}