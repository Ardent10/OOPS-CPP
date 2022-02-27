#include<iostream>
using namespace std;

class Matrix {

    private:
    int M[10][10];
    int m,n;    
    
    public:
    Matrix(){
        m=0,n=0;
    }

    Matrix (int r,int c){
        m=r;
        n=c;
    }

    void Set_Mul_Mat(){
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                M[i][j]=0;
            }
        }
    }


    void Print();
    void Input();
    void Multiply(Matrix M1,Matrix M2);

};

void Matrix::Input(){
    cout<<"Enter the Matrix: "<<endl;
    for (int i = 0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<"Enter element no ["<<i+1<<","<<j+1<<"]: ";
            cin>>M[i][j];
        }
    }
}

void Matrix:: Multiply (Matrix M1,Matrix M2){
    if (M1.n==M2.m)
    {
        for (int i=0; i<M1.m; i++)
        {
            for (int j=0; j<M1.n; j++)
            {
               for (int k=0; k<M2.n; k++)
               {
                   M[i][j] += M1.M[i][k]*M2.M[k][j];
               }
                   
            }
        }
        
    }
    else
    {
        cout<<"Matrix multiplication is not possible";
    }
    
}
void Matrix::Print() {
    cout<<"Matrix Elements: "<<endl;
    for (int i = 0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<M[i][j]<<" ";            
        }
        cout<<endl;
    }
} 


int main(){

    int r1,c1,r2,c2;

    cout<<"Enter the size of Matrix M1: ";
    cin>>r1>>c1;
    Matrix M1(r1,c1);
    M1.Input();

    cout<<"Enter the size of Matrix M2: ";
    cin>>r2>>c2;
    Matrix M2(r2,c2);
    M2.Input();

    Matrix M3(r1,c2);
    M3.Set_Mul_Mat();
    M3.Multiply(M1,M2);

    cout<<"Matrix M1 is:"<<endl;
    M1.Print();
    cout<<"Matrix M2 is:"<<endl;
    M2.Print();
    cout<<"Multiplication Matrix M3 is:"<<endl;
    M3.Print();


  return 0;
}


