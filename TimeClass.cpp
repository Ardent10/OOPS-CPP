#include <iostream>
using namespace std;

class Time{
    int hours, minutes,seconds;
    public:
   
    void getTime(int h, int m, int s){
        hours=h;
        minutes=m;
        seconds=s;
    }
   
    void showTime(){
        cout<<"Time: "<<hours<<" : "<<minutes<<" : "<<seconds<<endl;
    }
   
    void sum(Time, Time);
   
};

void Time::sum(Time t1,Time t2){
   
    seconds=(t1.seconds + t2.seconds)%60;
   
    minutes=(t1.minutes+t2.minutes +(t1.seconds + t2.seconds)/60)%60 ;
   
    hours=t1.hours+t2.hours + (t1.minutes+t2.minutes)/60;
   
}

using namespace std;

int main()
{  
    Time t1,t2,t3;
   
    t1.getTime(15,53,38);
    t2.getTime(10,25,40);
   
    t3.sum(t1,t2);
   
    cout<<"Time T1: ";
    t1.showTime();

    cout<<"Time T2: ";
    t2.showTime();

    cout<<"Time T3: ";
    t3.showTime();

    return 0;
}